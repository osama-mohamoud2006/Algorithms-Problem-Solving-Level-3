#include <cctype>
#include <iostream>
#include <string>
#include <stdio.h>
#include <vector>
#include "E:\projects\my library\AllStuff.h"
using namespace std;
using namespace AllStuff;

string trim_left(string str)
{

    bool isfirst = false;
    for (int i = 0; i < str.size(); i++)
    {

        if (isfirst == true)
        {
            return str.substr(i - 1, str.size() - 1);
        }

        isfirst = (str[i] == ' ') ? false : true;
    }
}

string right_trim(string str)
{
    for(int i =0 ; i<str.length(); i++){
        if( !(str.at(i)=='a')&& (str.at(i+1)=' ')){
            return str ;
        }
    }
}

int main()
{
    cout << trim_left(read_full_line("Enter: ")) << endl;
     cout << right_trim(read_full_line("Enter: ")) << endl;
}