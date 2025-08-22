#include <cctype>
#include <iostream>
#include <string>
#include <stdio.h>
#include <vector>
#include "E:\projects\my library\AllStuff.h"
using namespace std;
using namespace AllStuff;

void reverse(string s)
{
    string delim = " ";
    string res;
    string sword;
    for (int i = s.size() - 1; i >= 0; i--)
    {
        if (s.at(i) != ' ')
            sword += s.at(i);
        if (s.at(i) == ' ')
        {
            for (int j = sword.size() - 1; j >= 0; j--) {
                res += sword[j];
            }
            cout << res << " ";
            sword = "";
            res = "";
        }
    }

    res= "";
    if (sword != "")
    {

   for(int i = sword.size() - 1; i >= 0; i--) {

       res += sword.at(i);
    }
   
   cout << res<< " ";
    }
    cout << endl;
}

int main()
{
    string w = read_full_line("Enter: ");
    reverse(w);
}