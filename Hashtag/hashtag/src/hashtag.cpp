#include "hashtag.h"

std::string TurnToHashtag(std::string str){

    bool flag=true;
    std::string hashtag="#";

    if (str.size() > 0)
    {
        for (int i = 0; i < str.size(); i++)
        {
            if (str[i] != ' ' && str[i] != ',')
                if (flag)
                {
                    hashtag += (char)toupper(str[i]);
                    flag = false;
                }
                else hashtag += str[i];
            else flag = true;
        }

        if (hashtag.size() <= 100) return hashtag;
        else return "Exception";
    }
    else return "Exception";
};