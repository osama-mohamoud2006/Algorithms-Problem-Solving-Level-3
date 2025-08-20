#include <cctype>
#include <iostream>
#include "E:\projects\my library\AllStuff.h"
#include <string>
using namespace std;
using namespace AllStuff;

string lower_the_first_char(string word)
{

    bool isfirst = true;
    for (int i = 0; i < word.length(); i++)
    {
        if (isfirst == true && word.at(i) != ' ')
        {
            word.at(i) = tolower(word.at(i));
        }
        isfirst = (word.at(i) == ' ') ? true : false;
    }
    return word;
}

int main()
{
    string word = read_full_line("enter: ");
    cout<<lower_the_first_char(word)<<endl;
}