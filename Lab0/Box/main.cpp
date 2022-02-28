
#include <iostream>
#include "Box.h"

using namespace std;

int main(){

    //ios_base::sync_with_stdio(false); cin.tie(nullptr);
    int l, w, d;
    Box b(3, 4 ,5);
    //b.volume();
    for (int i = 0; i < 5; i++){
       l = 1 + (rand() % 10);
       w = 1 + (rand() % 10);
       d = 1 + (rand() % 10);

       cout << "Dimensions = " << l << " "<< w <<" "<< d << endl;
       Box b(l, w, d);
//
       b.volume();
    }
}


