#include <cctype>
#include <iostream>
#include <string>
#include <stdio.h>
#include <vector>
#include "E:\projects\my library\AllStuff.h"
using namespace std;
using namespace AllStuff;

string join_string(vector<string> &vdata, string delim = " ")
{

    string res = " ";
    for (int i = 0; i < vdata.size(); i++)
    {
        res += vdata.at(i) + delim;
    }
    return res.substr(0, res.size() - delim.size());
}

string join_string(string arr[], short length, string delim = " ")
{
    string *ptr;
    ptr = new string[length];

    for (int i = 0; i < length; i++)
    {
        *(ptr + i) = arr[i];
    }

    string res = " ";

    for (int i = 0; i < length; i++)
    {
        res += *(ptr + i) + delim;
    }
    delete []ptr;
    return res.substr(0, res.length() - delim.size());
}

int main()
{
    vector<string> vdata = {"osama", "mohamoud", "elsherif"};
       // cout << join_string(vdata, " # ") << endl;

    string arr[3] = {"osama", "mohamoud", "elsherif"};
      cout << join_string(arr, 3," # ") << endl;

}