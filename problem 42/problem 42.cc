#include <cctype>
#include <iostream>
#include <string>
#include <stdio.h>
#include <vector>
#include "E:\projects\my library\AllStuff.h"
using namespace std;
using namespace AllStuff;

vector<string> splitWord(string s, string delmi = " ")
{
    vector<string> res;
    short pos = 0;
    string sword;
    while ((pos = s.find(delmi)) != string::npos)
    {
        sword = s.substr(0, pos);
        if (sword != "")
            res.push_back(sword);
        s.erase(0, pos + delmi.size());
    }

    if (s != "")
        res.push_back(s);

    return res;
}

string replace(string original_string, string which_you_want_to_replace, string word_to_replace)
{
    string After_replaced;
    vector<string> search_in_vector;
    // store the words in another vector
    search_in_vector = splitWord(original_string);

    //edit on vector elements 
    for (int i = 0; i < search_in_vector.size(); i++)
    {
        if(search_in_vector[i]==which_you_want_to_replace){
            search_in_vector[i]= word_to_replace;
        }
    }

    // store the vector items in single string
    vector<string>::iterator Final_res;
    for (Final_res = search_in_vector.begin(); Final_res != search_in_vector.end(); Final_res++)
    {
        After_replaced += *(Final_res) + " ";
    }
    
    return After_replaced = After_replaced.substr(0, After_replaced.length() - 1);
}

int main()
{
    string w = read_full_line("Enter: ");

    cout << replace(w, "egy", "USA") << endl;
}