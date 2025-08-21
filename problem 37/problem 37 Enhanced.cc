#include <cctype>
#include <iostream>
#include <string>
#include <stdio.h>
#include <vector>
#include "E:\projects\my library\AllStuff.h"
using namespace std;
using namespace AllStuff;
// function that will return vector
vector<string> split(string s, string delmi = " ")
{
    vector<string> res;
    short pos = 0;
    string sword;
    while ((pos = s.find(delmi)) != string::npos)
    {
        sword = s.substr(0, pos);

        if (sword != "")
            res.push_back(sword);

        s.erase(0, pos + delmi.length());
    }
    if (s != "")
        res.push_back(s);

    return res;
}

int main()
{
    vector<string> PrintRes;
    PrintRes = split(read_full_line("Enter: "), " ");
  
    vector<string> ::iterator vit;

    for(vit =PrintRes.begin(); vit!= PrintRes.end(); vit++)
    cout<<*(vit)<<endl;
  
}