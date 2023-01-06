#include <iostream>
#include <sstream>
#include <vector>
#include <string>
#include "task_4.h"

using namespace std;


int main(){
  
  std::cout<<"enter the buffer size"<<std::endl;
  string size;
  getline(cin, size);
  list* my_list = init(stoi(size));
  
  std::cout<<"enter the elements"<<std::endl;

  string s;
  getline(cin, s);
  istringstream iss(s);
  int n;
  vector<int> v;
  while (iss >> n)
     v.push_back(n);
  for (auto m : v)
     add(my_list,m);

  
  print_list(my_list, std::cout);

}