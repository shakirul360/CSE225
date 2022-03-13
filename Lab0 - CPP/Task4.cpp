#include <bits/stdc++.h>
#include <iostream>

using namespace std;
bool isPrime(int n);

int main(){

    //ios_base::sync_with_stdio(false); cin.tie(nullptr);
    for (int i = 300; i <= 500; i++){
        if (isPrime(i)){
            cout << "Prime " << i << endl;
        }
    }

}

bool isPrime(int n){

    if(n <= 1)
    {
        return false;
    }
    for(int i = 2; i * i <= n; i++)
    {
        if(n % i == 0)
        {
            return false;
        }
    }
    return true;

}
