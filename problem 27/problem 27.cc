#include <cctype>
#include <iostream>
#include <string>
using namespace std;


char invert(char c){
    if( islower(c)) return  c=toupper(c);
    if(isupper(c)) return c=tolower(c);
   
}

int main(){
    char str = ' ';
    cout<<"enter char: ";
    cin>>str;
    cout<<invert(str)<<endl;
}