#include <cctype>
#include <iostream>
#include "E:\projects\my library\AllStuff.h"
#include <string>
using namespace std;
using namespace AllStuff;

string first_letter(string full)
{
    string res = "";
    bool isfirst = false;

    for (int i = 0; i < full.size(); i++)
    {
        if (full[i] != ' ' && isfirst == true)
        { // if you found word and the pervious index was space

            res += toupper(full[i]);
        }
        else
        {
            if(i==0)res += toupper(full.at(0));
           else  res += full[i];
        }
        (full[i] == ' ') ? isfirst = true : isfirst = false; // space means new word
    }
    return res;
}



int main()
{
    string word = read_full_line("enter sentence: ");
    cout << first_letter(word) << endl;
}