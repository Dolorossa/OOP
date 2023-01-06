#include<iostream>
#include <string>
#include <algorithm> 
#include <cmath> 
#include <cstdlib>

#include "task_3.h"


using namespace std;

//const string alpha ="ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";




int main(){
   
   string str;
   
   getline(cin, str);
   
   cout<<encode(str);
}