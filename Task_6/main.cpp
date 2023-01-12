#include <cstdlib>
#include <iostream>
#include <string>

#include "task_6.h"

using namespace std;


int main(){

    string str;
    getline(cin, str);

    cout<<CalcRPN(str);
}    
