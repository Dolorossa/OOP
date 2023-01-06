#pragma once

#include<iostream>
#include <string>
#include <algorithm> 
#include <cmath> 

using namespace std;

const string alpha ="ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";


string turn_bin(int int_input, int num);

string make_bin_encode_str(string str);

char convert(string str);

string make_bin_decode_str(string str);

string encode(string str);

string decode(string str);