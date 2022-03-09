#include "Timestamp.h"
#include <iostream>

using namespace std;

Timestamp::Timestamp(){

    hour = 0;
    mint = 0;
    sec = 0;

}

Timestamp::Timestamp(int s, int m, int h){

    hour = h;
    mint = m;
    sec = s;

}

void Timestamp::print(){
    cout << this->sec << " "<< this -> mint << " "<< this-> hour << endl;

}

bool operator>(Timestamp a, Timestamp b){
    if ((a.hour > b.hour) || ((a.hour == b.hour )&&(a.mint > b.mint)) || ((a.hour == b.hour)&&(a.mint == b.mint) && (a.sec > b.sec))){
        return true;
    } else{
        return false;
    }
}


