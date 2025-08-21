#include <cctype>
#include <iostream>
#include <string>
#include <stdio.h>
#include "E:\projects\my library\AllStuff.h"
using namespace std;
using namespace AllStuff;

void each_word_in_single_line(string word)
{
    string eword = "";
    for (int i = 0; i < word.size(); i++)
    {
        if (word[i] != ' ')
            eword += word[i];
        if (word[i] == ' ')
        {
            cout << eword << endl;
            eword = "";
        }
    }
    if (eword != "")
        cout << eword;
}

void another_method_to_print(string s)
{

    string delim = " "; // store space to search about it in string
    short pos = 0;      // to use it to substr from 0 to the occurence of delim
    string sword;       // to store the substr res and cout<< it

    // the conditon of repeating is (if you find the space then continue the loop)

    // the condition means if there is space then donot exit loop
    while ((pos = s.find(delim)) != string::npos)
    {
        sword = s.substr(0, pos); // substr from the first of string untill the first space
        if (sword != " ")
            cout << sword << endl; // if sword have string then print it

        s.erase(0, pos + delim.size()); // erase from the first of string untill the first word + delim
    }

    // the last word doesn't have delim after it so the while will exit
    if (s != " ")
        cout << s << endl;
}

int main()
{
    string word = read_full_line("Enter: ");
    // each_word_in_single_line(word);
    another_method_to_print(word);
}