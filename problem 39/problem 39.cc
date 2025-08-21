#include <cctype>
#include <iostream>
#include <string>
#include <stdio.h>
#include <vector>
#include "E:\projects\my library\AllStuff.h"
using namespace std;
using namespace AllStuff;

string join_string(vector<string> &vdata, string delim = " ")
{
    string res = " ";
   for(int i=0; i<vdata.size(); i++){
    res+=vdata[i];
    res+= delim;
   }
   return res.substr(0,res.length()-delim.size());
}

int main(){
    vector<string> vdata= {"osama","mohamoud","elsherif"};

   cout<< join_string(vdata," # ")<<endl;

}