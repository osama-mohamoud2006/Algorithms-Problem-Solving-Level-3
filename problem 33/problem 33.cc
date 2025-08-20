#include <cctype>
#include <iostream>
#include <string>
#include <stdio.h>
#include "E:\projects\my library\AllStuff.h"
using namespace std;
using namespace AllStuff;

bool isvowel(char c){
    c= tolower(c);
    return(c== 'a'||c=='e' || c=='o' || c=='u' || c=='i' );
}

int count_vowels_in_string(string word){
    int count =0;
    for(int i=0; i<word.size(); i++){
        if(isvowel(word.at(i)) == true) count++;
    }
    return count;
}

int main(){

    string word = read_full_line("Enter: ");
    cout<<"number of vowels is: "<<count_vowels_in_string(word)<<endl;
  
}