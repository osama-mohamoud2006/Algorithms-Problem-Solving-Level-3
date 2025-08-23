#include <cctype>
#include <iostream>
#include <string>
#include <stdio.h>
#include <vector>
#include "E:\projects\my library\AllStuff.h"
using namespace std;
using namespace AllStuff;



string remove_punct(string s)
{
   string res ; 
   
    for (int i = 0; i < s.size(); i++)
    {
        if(!(ispunct(s[i])) ) {
            
          res+=s[i];
        }
       
    }
    return res;
}

int main(){
   cout<< remove_punct("hello, it is function test! , do you know?")<<endl;
}