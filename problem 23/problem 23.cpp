#include "E:\projects\my library\AllStuff.h"
#include <iostream>
#include <string>
#include <cctype>
using namespace std;

void first_letter(string full)
{
    bool isfirst = false ; 
    cout<<full.front()<<endl;
    for (int i = 0; i < full.size(); i++)
    {
          if(full[i]!=' '&& isfirst==true){
              cout<<full[i]<<endl;
          }
        (full[i]==' ')? isfirst=true:isfirst=false;
    }
}

int main()
{
    string full = read_full_line("enter the sentence: ");
    first_letter(full);
}