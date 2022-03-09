#include "Timestamp.h"

Timestamp::Timestamp(){

    hour = 0;
    mint = 0;
    sec = 0;

}

Timestamp::Timestamp(int h, int m, int s){

    hour = h;
    mint = m;
    sec = s;

}

bool operator>(Timestamp a, Timestamp b){
    if ((a.hour > b.mint) && (a.mint > b.mint) && (a.sec > b.sec)){
        return true;
    } else{
        return false;
    }
}


