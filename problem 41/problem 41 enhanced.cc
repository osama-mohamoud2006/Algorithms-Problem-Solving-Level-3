#include <cctype>
#include <iostream>
#include <string>
#include <stdio.h>
#include <vector>
#include "E:\projects\my library\AllStuff.h"
using namespace std;
using namespace AllStuff;

vector<string> split_string(string s, string delmi = " ")
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
    {
        res.push_back(s);
    }
    return res;
}

string reverse(string w, string delmi = " ")
{
    string FinalResult;// to store the returning res
    vector<string> res;
    res = split_string(w); // fill vector with splited string

    // declare the iterator to fill the string reversed from vector
    vector<string>::iterator vitprint;

    vitprint = res.end(); // starting from the end
    while (vitprint != res.begin())
    { 
         vitprint--;
        FinalResult += *(vitprint) + delmi;
      
    }

    return FinalResult= FinalResult.substr(0,FinalResult.size()-delmi.length());
}

int main()
{
    string w = read_full_line("Enter: ");
    //vector<string> resp;
    //resp = split_string(w);
    // vector<string>::iterator vit;
    // for (vit = resp.begin(); vit != resp.end(); vit++)
    //     cout << "split: " << *vit << endl;

   cout<< reverse(w)<<endl;
}