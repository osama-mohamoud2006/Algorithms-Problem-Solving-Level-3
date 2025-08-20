#include <cctype>
#include <iostream>
#include <string>
#include <stdio.h>
#include "E:\projects\my library\AllStuff.h"
using namespace std;
using namespace AllStuff;

char Serach()
{
    char search = ' ';
    cout << "enter the char to count: ";
    cin >> search;
    return search;
}

int count_the_char(string word, char search, bool match = true)
{
    int count = 0;
    for (int i = 0; i < word.size(); i++)
    {

        if (match == true)
        {
            if (word.at(i) == search)
                count++;
        }
        else
        {
            if (toupper(word[i]) == toupper(search))
                count++;
        }
    }
    return count;
}

int main()
{
    string word = read_full_line("Enter string: ");

    char search = Serach();

    //match the input
    cout << "letter '" << search << "" << "' count is: " << count_the_char(word, search) << endl;

    // count all cases 
    cout << "letter '" << search << "" << "' or " << " '" << (invert(search)) << "' " << "count is: " << count_the_char(word, search,false) << endl;
}