#include <cctype>
#include <iostream>
#include <string>
#include <stdio.h>
#include "E:\projects\my library\AllStuff.h"
using namespace std;
using namespace AllStuff;

char Search()
{
    char search = ' ';
    cout << "enter the char to count: ";
    cin >> search;
    return search;
}

bool isvowel(char c){
    c= tolower(c);
    return(c== 'a'||c=='e' || c=='o' || c=='u' || c=='i' );
}

int main(){
    char c = Search();

    isvowel(c)? cout<<"Yes letter '"<<c<<"' is Vowel! ":cout<<"No letter '"<<c<<"' isn't Vowel! ";
}