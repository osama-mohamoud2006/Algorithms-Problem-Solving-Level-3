#include <cctype>
#include <iostream>
#include <string>
#include <stdio.h>
#include <vector>
#include "E:\projects\my library\AllStuff.h"
using namespace std;
using namespace AllStuff;

void word_to_vector(vector<string> &vstr, string str)
{
    vstr.push_back(str);
}

void split_word_and_count_tokens(string s, vector<string> &vstr)
{
    string space = " ";
    short pos = 0;
    short token = 0;
    string split;
    while (s.find(space) != string::npos)
    {
        pos = s.find(space);
        split = s.substr(0, pos);
        token++;
        word_to_vector(vstr, split);

        s.erase(0, pos + space.length());
    }

    if (s != " ")
    {
        token++;
        word_to_vector(vstr, s);
    }
    cout << "Token: " << token << endl;
}

void print(vector<string> &vstr, string &word)
{
   
    word = read_full_line("Enter: ");

    split_word_and_count_tokens(word, vstr);
    for (string &s : vstr)
    {
        cout << s << endl;
    }
}

int main()
{
    vector<string> vstr;
     string word=" ";
    print(vstr,word);
}