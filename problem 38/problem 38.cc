#include <cctype>
#include <iostream>
#include <string>
#include <stdio.h>
#include <vector>
#include "E:\projects\my library\AllStuff.h"
using namespace std;
using namespace AllStuff;

string left_trim(string s)
{
    for (int i = 0; i < s.size(); i++)
    {
        // it fasced the first letter of word
        if (s.at(i) != ' ')
            return s.substr(i, s.size() - 1);
        // eplantion : the loop will loop untill find the first char if it happened return the string substred from the index of first char untill the end of string
    }
    return " ";
}

string right_trim(string s)
{
    for (int i = s.size() - 1; i >= 0; i--)
    {
        if(s.at(i)!=' ') return s.substr(0,i+1 );
        //Explantion the loop will loop the chars of string starting from the last of string and will continue untill the first char if it found will substr the string from the fisrt char to the i
    }
      return " ";
}

int main()
{
    string w = read_full_line("Enter: ");
   // cout << left_trim(w) << endl;
    cout <<right_trim(w) << endl;
}