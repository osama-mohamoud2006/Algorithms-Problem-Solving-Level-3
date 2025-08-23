#include <cctype>
#include <iostream>
#include <string>
#include <stdio.h>
#include <vector>
#include "E:\projects\my library\AllStuff.h"
using namespace std;
using namespace AllStuff;

vector<string> split_string (string s, string delim = " ")
{
    vector<string> res;
    short pos = 0;
    string word;

    while ((pos = s.find(delim)) != string::npos)
    {
        word = s.substr(0, pos);

        if (word != "")
            res.push_back(word);

        s.erase(0, pos + delim.length());
    }

    if (s != "")
        res.push_back(s);

    return res;
}

string join_string (vector<string> splited_words, string delim = " ")
{
    string joined;
    for (string &str : splited_words)
    {
        joined += str + delim;
    }
    return joined = joined.substr(0, joined.size() - delim.size());
}

string upper_all(string str)
{
    for (int i = 0; i < str.size(); i++)

        str = toupper(str[i]);

    return str;
}

string replace_word(string original_str, string which_to_replace, string the_New_string, bool case_match = true)
{

    vector<string> splited_words_transfered;
    splited_words_transfered = split_string(original_str);

    for (string &element : splited_words_transfered)
    {
        if (case_match == true)
        {
            if (element == which_to_replace)
                element = the_New_string;
        }
        else
        {
            if (upper_all(element) == upper_all(which_to_replace))
                element = the_New_string;
        }
    }

    return join_string(splited_words_transfered);
}

int main(){
    string original = "Hi, iam osama from Egypt !";
    string which_you_want_to_replace = "egypt";
    string to_which = "USA";

    cout<<"Original string: "<<original<<endl;
    cout<<"with case senstive: "<<replace_word(original,which_you_want_to_replace,to_which)<<endl;
     cout<<"without case senstive: "<<replace_word(original,which_you_want_to_replace,to_which,false)<<endl;
}