#include <cctype>
#include <iostream>
#include <string>
#include <stdio.h>
#include "E:\projects\my library\AllStuff.h"
using namespace std;
using namespace AllStuff;

int count_the_char(string word, char search)
{
    int count = 0;
    for (int i = 0; i < word.size(); i++)

        if (word.at(i) == search)
            count++;
    return count;
}

int main()
{
    string word = read_full_line("Enter string: ");

    char search = ' ';
    cout << "enter the char to count: ";
    cin >> search;

    cout << "letter '" << search << "" << "' count is: " << count_the_char(word, search) << endl;
}