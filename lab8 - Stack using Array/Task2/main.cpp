#include <iostream>
#include "Stack_arr.cpp"
bool par_bal(string str);

using namespace std;

int main() {


    par_bal("(())()(()())()");
    par_bal("(())()((()");
    par_bal("(())))((()");






    return 0;
}


bool par_bal(string str) {

    Stack_arr<char> par;

    for (int i = 0; i < str.size(); i++){
        if (str[i] == '('){
            par.push(str[i]);
        } else {
            par.pop();
        }
    }
    if (par.is_Empty()){
        cout << "Balanced" << endl;
    } else {
        cout << "Unbalanced" << endl;
    }
}
