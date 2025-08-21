#include <cctype>
#include <iostream>
#include <string>
#include <stdio.h>
#include "E:\projects\my library\AllStuff.h"
using namespace std;
using namespace AllStuff;

void another_method_to_print(string s)
{
    string space =" ";
    short pos =0 ; 
    string sword;

    while(s.find(space)!=string::npos){
        pos= s.find(space);
        sword = s.substr(0, pos);

        if(sword!=" ")cout<<sword<<endl;

        s.erase(0,pos+space.size() );
    }

    if(s!=" ") cout<<s<<endl; 

}

int main()
{
    string word = read_full_line("Enter: ");

    another_method_to_print(word);
}