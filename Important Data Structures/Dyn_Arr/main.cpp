#include <iostream>
#include "Dyn_Arr.h"


using namespace std;

int main()
{
    Dyn_Arr<int> arr(5);

    for (int i = 0; i <5; i++){
        arr.setValue(i, i + 1);
    }

    for (int i = 0; i <5; i++){
        cout << arr.getValue(i);
    }
}
