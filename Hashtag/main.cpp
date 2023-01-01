#include <iostream>
#include <cstdlib>
#include <string>
#include <cctype>

#include "hashtag.h"


using namespace std;


int main()
{
    string str;
    
    getline(cin, str);
    
    cout<<TurnToHashtag(str);

    return 0;
}