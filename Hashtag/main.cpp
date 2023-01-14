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

    try{
    
    cout<<TurnToHashtag(str);

    }
    catch (const char* e) {
		cout << "Exception: " << e;
	}

    return 0;
}