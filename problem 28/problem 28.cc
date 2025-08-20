#include <cctype>
#include <iostream>
#include <string>
#include"E:\projects\my library\AllStuff.h"  
using namespace std;
using namespace AllStuff;

string the_whole_str(string word)
{
    for (int i = 0; i < word.size(); i++)
        word.at(i) = invert(word[i]);
    return word;
}

int main()
{
    string word = read_full_line("Enter: ");
    cout<< the_whole_str(word)<<endl;
}