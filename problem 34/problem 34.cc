#include <cctype>
#include <iostream>
#include <string>
#include <stdio.h>
#include "E:\projects\my library\AllStuff.h"
using namespace std;
using namespace AllStuff;

bool isvowel(char c)
{
    c = tolower(c);
    return (c == 'a' || c == 'e' || c == 'o' || c == 'u' || c == 'i');
}

void print_vowels_in_string(string word)
{

    for (int i = 0; i < word.size(); i++)

        if (isvowel(word.at(i)))
            cout << word.at(i) << " ";
}

int main()
{

    string word = read_full_line("Enter: ");
    cout << "number of vowels is: ";
    print_vowels_in_string(word);
    cout << endl;
}