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

bool operator>(Timestamp a, Timestamp b){
//    cout << "comparing - " << endl;
//    a.print();
//    b.print();
//    cout << endl;
    if ((a.hour > b.hour) || ((a.hour == b.hour)&&(a.mint > b.mint)) || ((a.hour == b.hour )&&(a.mint ==b.mint) && (a.sec>b.sec))){
        //cout << "returning true" << endl;
        return true;
    } else{
        //cout << "returning false" << endl;
        return false;
    }
}

bool operator==(Timestamp a, Timestamp b){

    if (((a.hour == b.hour )&& (a.mint == b.mint) && (a.sec ==b.sec))){
        return true;
    } else{
        return false;
    }
}


void Timestamp::print(){
    cout << sec << "\t" << mint << "\t" <<  hour << "\t" << endl;
}

