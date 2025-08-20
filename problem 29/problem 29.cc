#include <cctype>
#include <iostream>
#include <string>
#include <stdio.h>
#include "E:\projects\my library\AllStuff.h"
using namespace std;
using namespace AllStuff;

enum EnCountWhat
{ capital = 1, small = 2,all = 3 , punction=4};

int count_capital_letters(string word)
{
    int count = 0;
    for (int i = 0; i < word.length(); i++)
        if (isupper(word.at(i)))
            count++;
    return count;
}

int count_small_letters(string word)
{
    int count2 = 0;
    for (int i = 0; i < word.length(); i++)
        if (islower(word.at(i)))
            count2++;
    return count2;
}

int count_punction(string word){
     int count3 = 0;
    for (int i = 0; i < word.length(); i++)
        if (ispunct(word.at(i)))
            count3++;
    return count3;
}

int count_all_chars_without_space(string word)
{
    return count_small_letters(word) + count_capital_letters(word);
}


int print_count(string word, EnCountWhat WhatToCount = EnCountWhat::all)
{

    switch (WhatToCount)
    {
    case EnCountWhat::small:
        return count_small_letters(word);

    case EnCountWhat::capital:
        return count_capital_letters(word);

        case EnCountWhat::punction:
        return count_punction(word);

    default:
        return count_all_chars_without_space(word);
    }
}

int main()
{
    string word = read_full_line("Enter: ");
    // printf("the string length is: %d\n", word.size());
    // printf("the count of capital letter is: %02d\n", count_capital_letters(word));

    // printf("the count of small letter is: %02d\n", count_small_letters(word));

    cout<< "the count of capital letters: "<<print_count(word,EnCountWhat::capital)<<endl;

  cout<< "the count of small letters: "<<print_count(word,EnCountWhat::small)<<endl;

    cout<< "the count punction: "<<print_count(word,EnCountWhat::punction)<<endl;
    cout<< "the count of all letters: "<<print_count(word)<<endl;
}
