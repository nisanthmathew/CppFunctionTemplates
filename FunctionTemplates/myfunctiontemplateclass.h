#ifndef MYFUNCTIONTEMPLATECLASS_H
#define MYFUNCTIONTEMPLATECLASS_H
#include <iostream>

class MyFunctionTemplateClass
{
public:
     MyFunctionTemplateClass(){}

    template<typename T1, typename T2> //template to check equality
    T2 TEqualComparisonfunction(T1 firstinputtocompare, T1 secondinputtocompare)
    {
        T2 equal;
        if(firstinputtocompare==secondinputtocompare){
            equal = true;
        }
        else{
            equal = false;
        }
        return equal;
    }


    template<typename T1, typename T2> //template to check who is greater
    T2 TGreaterComparisonfunction(T1 firstinputtocompare, T1 secondinputtocompare)
    {
        T2 equal;
        if(firstinputtocompare>secondinputtocompare){
            equal = true;
        }
        else{
            equal = false;
        }
        return equal;
    }

    template<typename T> //swap the contents in variables
    void Tswap(T &input1, T &input2){
        T temp{input1};
        input1 = input2;
        input2 = temp;
    }


};

#endif // MYFUNCTIONTEMPLATECLASS_H
