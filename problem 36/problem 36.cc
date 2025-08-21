#include <cctype>
#include <iostream>
#include <string>
#include <stdio.h>
#include "E:\projects\my library\AllStuff.h"
using namespace std;
using namespace AllStuff;

short print_the_count_of_words(string str)
{
    string space = " ";
    short pos = 0;
    string temp;
    short count = 0;

    while (str.find(space) != string::npos)
    {
        pos = str.find(space);
        count++; 
        // temp = str.substr(0, pos);
        // if (temp != " ")
        //     count++;

        str.erase(0, pos + space.size());
    }

    if (str != " ")
        count++;
    return count;
}

int main(){
    string word = read_full_line("Enter: ");
    cout<<"the number of words is: "<<print_the_count_of_words(word)<<endl; 

}