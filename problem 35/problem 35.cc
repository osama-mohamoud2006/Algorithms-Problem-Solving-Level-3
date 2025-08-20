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
    if(eword!="") cout<<eword;
}


int main()
{
    string word = read_full_line("Enter: ");
     each_word_in_single_line(word);
}