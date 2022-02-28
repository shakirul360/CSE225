#include <iostream>
#include "DynArr.h"


using namespace std;

int main()
{
    cout << "Hello world!" << endl;

    DynArr<int> d(10);

    d.setValue(0, 10);
    d.getValue(0);
    return 0;
}
