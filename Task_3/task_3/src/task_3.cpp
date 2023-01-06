#include "task_3.h"


using namespace std;

//const string alpha ="ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";


string turn_bin(int int_input, int num){ 
   int check=0;
   std::string bin_input="";

   while (int_input>0){
    bin_input+=to_string(int_input%2);
    int_input/=2;     
    check++;
   }

   while (check<num){
    bin_input+="0";
    check++;
   }

   reverse(bin_input.begin(), bin_input.end()); 

   return bin_input;
}


string make_bin_encode_str(string str){
    string new_bin_str="";
    for (int i=0; i<str.size();i++)
        new_bin_str+=turn_bin(str[i]-'0'+48,8);
    return new_bin_str;
}

char convert(string str) {
  int dec = 0, i = 0, rem;
  int n=stoi(str);
  while (n!=0) {
    rem = n % 10;
    n /= 10;
    dec += rem * pow(2, i);
    ++i;
  }
  return dec;
}

string make_bin_decode_str(string str){
    int index;
    int flag=0;
    string new_str="";

    while (str[str.size()-1]=='=')  {str.erase(str.size()-1,1); flag++;}

    for(int i=0;i<str.size();i++){
        index = alpha.find(str[i]);
        new_str+=turn_bin(index,6);
    }

    if (flag==1)  new_str.erase(new_str.size()-1,2);
    if (flag==2)  new_str.erase(new_str.size()-1,4);
    
    return new_str;
}

string encode(string str){
    string bin=make_bin_encode_str(str);
    string six_bites="";
    string final_str="";

    int a=bin.size()%6;
    if (a==2) bin+="0000";
    else if (a==4) bin+="00";

    for(int i=0; i<bin.size();i++){
        if((i+1)%6!=0){
            six_bites+=bin[i];
        }
        else {
          six_bites+=bin[i];
          final_str+=alpha[convert(six_bites)];
          six_bites="";
        }
    }

    if (a==2) final_str+="==";
    else if (a==4) final_str+="=";

    return final_str;
}


string decode(string str){
    string bin=make_bin_decode_str(str);
    string eight_bites="";
    string final_str="";
    int a=bin.size();
    
    for(int i=0; i<bin.size();i++){
        if((i+1)%8!=0){
            eight_bites+=bin[i];
        }
        else {
          eight_bites+=bin[i];
          final_str+=char(convert(eight_bites));
          eight_bites="";
        }
    }

    return final_str;
}