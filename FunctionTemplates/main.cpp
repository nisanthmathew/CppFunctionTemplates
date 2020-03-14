#include <iostream>
#include <vector>
#include <QCoreApplication>
#include "myfunctiontemplateclass.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    MyFunctionTemplateClass swaper;
    std::vector<std::string> va(1000,"Hello");
    std::vector<std::string> vb(1000,"Hello2");
    std::vector<std::string> testa{va};
    std::vector<std::string> testb{vb};
    std::vector<std::string>* pva = &va;
    std::vector<std::string>* pvb = &vb;
    swaper.Tpointerswap(pva,pvb);
    return a.exec();
}
