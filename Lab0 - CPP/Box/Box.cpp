#include "Box.h"
#include <iostream>

using namespace std;

Box::Box(){
    length = 0;
    width = 0;
    depth = 0;
}

Box::Box(int l, int w, int d){
    length = l;
    width = w;
    depth = d;
}

void Box::volume(){
    cout << length * width * depth << endl;
}


