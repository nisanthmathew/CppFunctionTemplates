#include <QtTest>

// add necessary includes here

#include "myfunctiontemplateclass.h"
#include "mystring.h"

class FunctionTemplateTestCase : public QObject
{
    Q_OBJECT

public:
    FunctionTemplateTestCase();
    ~FunctionTemplateTestCase();

private slots:
    void FunctionTemplateClassinit();
    void integerequalcomparison();
    void MyStringequalcomparison();
    void integergreatorcomparison();
    void swaptest();
};

FunctionTemplateTestCase::FunctionTemplateTestCase()
{

}

FunctionTemplateTestCase::~FunctionTemplateTestCase()
{

}

void FunctionTemplateTestCase::FunctionTemplateClassinit()
{
    MyFunctionTemplateClass initObject;
}

void FunctionTemplateTestCase::integerequalcomparison(){
    MyFunctionTemplateClass intcompare;
    bool equal{false};
    equal = intcompare.TEqualComparisonfunction<int,bool>(10,10);
    QCOMPARE(equal,true);
    equal = intcompare.TEqualComparisonfunction<int,bool>(0,0);
    QCOMPARE(equal,true);
    equal = intcompare.TEqualComparisonfunction<int,bool>(-10,-10);
    QCOMPARE(equal,true);
    equal = intcompare.TEqualComparisonfunction<int,bool>(10,-10);
    QCOMPARE(equal,false);
    equal = intcompare.TEqualComparisonfunction<int,bool>(10,0);
    QCOMPARE(equal,false);
}

void FunctionTemplateTestCase::MyStringequalcomparison(){
    MyFunctionTemplateClass mystringcompare;
    bool equal{false};
    equal = mystringcompare.TEqualComparisonfunction<MyString,bool>("Hello","Hello");
    QCOMPARE(equal,true);
    equal = mystringcompare.TEqualComparisonfunction<MyString,bool>("Hello","Hello1");
    QCOMPARE(equal,false);
    equal = mystringcompare.TEqualComparisonfunction<MyString,bool>("Hello","");
    QCOMPARE(equal,false);
}

void FunctionTemplateTestCase::integergreatorcomparison(){
    MyFunctionTemplateClass mystringcompare;
    bool greater{false};
    greater = mystringcompare.TGreaterComparisonfunction<int,bool>(2,1);
    QCOMPARE(greater,true);
    greater = mystringcompare.TGreaterComparisonfunction<int,bool>(-2,1);
    QCOMPARE(greater,false);
}

void FunctionTemplateTestCase::swaptest(){
    MyFunctionTemplateClass swaper;
    std::vector<std::string> va(100000,"Hello");
    std::vector<std::string> vb(100000,"Hello2");
    std::vector<std::string> testa{va};
    std::vector<std::string> testb{vb};
    swaper.Tswap(va,vb);
    QCOMPARE(va,testb);
    QCOMPARE(vb,testa);
    QBENCHMARK {swaper.Tswap(va,vb);}

}



QTEST_APPLESS_MAIN(FunctionTemplateTestCase)

#include "tst_functiontemplatetestcase.moc"
