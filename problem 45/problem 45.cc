#include<fstream>
#include<iostream>
#include"E:\projects\my library\AllStuff.h"  
using namespace std; 
using namespace AllStuff;

struct stdata{
    string account_number =" ";
    short pin =0 ;
    string name =" ";
    string phone ="";
    int account_balance =0 ;
};

stdata fill_data(){
    stdata data;
    data.account_number = read_string("enter account num: ");
    data.pin= enter_number("\nenter pin: ");
    data.name = read_full_line("\nenter name: ");
    data.phone= read_string("\nenter your phone number: ");
    data.account_balance= enter_postive_number("\nenter account balance: ");
    return data;
}

string joinString(stdata data , string delmi ="#//#"){
    
   return( data.account_number+delmi+to_string(data.pin)+delmi+data.name+delmi +data.phone +delmi+ to_string(data.account_balance));
}

int main(){
    stdata data ;
     data=fill_data();

     cout<<joinString(data)<<endl;


}
