#include <iostream>
#include "myfunctiontemplateclass.h"
using namespace std;

int main()
{
    cout << "Hello World!" << endl;
    MyFunctionTemplateClass initObject;
    int a{0};
    int b{0};
    bool result{0};
    result = initObject.TEqualComparisonfunction<int,bool>(a,b);
    return 0;
}
