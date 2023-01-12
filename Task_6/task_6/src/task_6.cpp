#include "task_6.h"


vector<string> Read(string str){
    vector<string> mass;
    string strmin="";

    for(int i=0; i<str.size();i++){
        if (str[i]!=' ')
        strmin+=str[i];
        else{
        mass.push_back(strmin);
        strmin="";
        }
    }
    mass.push_back(strmin);
    return mass;
}

int CalcRPN(string str)
{
    vector<string> mass = Read(str);
    stack<int> stack;

    for (int i = 0; i < mass.size(); i++)
    {
        if ((mass[i] != "+") && (mass[i] != "*"))
        stack.push(stoi(mass[i]));

        else
        {
        int a = stack.top();
        stack.pop();
        int b = stack.top();
        stack.pop();
        if (mass[i] == "+")
            stack.push(b + a);
        else if (mass[i] == "*")
            stack.push(b * a);
        }
    }
    int res = stack.top();
    stack.pop();
    return res;
}