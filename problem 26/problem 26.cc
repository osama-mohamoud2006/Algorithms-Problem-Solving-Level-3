#include <cctype>
#include <iostream>
#include "E:\projects\my library\AllStuff.h"
#include <string>
using namespace std;
using namespace AllStuff;

string Upper1(string word)
{
    for (int i = 0; i < word.size(); i++)
    {
        word[i]= toupper(word[i]);
    }
    return word;
}

string lower1(string word)
{
    for (int i = 0; i < word.size(); i++)
    {
        word[i]= tolower(word[i]);
    }
    return word;
}

int main(){
    string word = read_full_line("enter: ");
    cout<<Upper1(word)<<endl;
    cout<<lower1(word)<<endl;
    
}