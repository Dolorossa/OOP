#include<iostream>
#include <string>
#include <algorithm> 
#include <cmath> 
#include <cstdlib>

#include "task_3.h"


using namespace std;


int main(){
   
   string str;
   
   getline(cin, str);
   
   cout<<encode(str);
}