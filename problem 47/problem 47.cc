#include <fstream>
#include <iostream>
#include "E:\projects\my library\AllStuff.h"
using namespace std;
using namespace AllStuff;

struct stdata
{
    string account_number = " ";
    short pin = 0;
    string name = " ";
    string phone = "";
    int account_balance = 0;
};

stdata fill_data()
{
    stdata data;
    data.account_number = read_string("enter account num: ");
    data.pin = enter_number("\nenter pin: ");
    data.name = read_full_line("\nenter name: ");
    data.phone = read_string("\nenter your phone number: ");
    data.account_balance = enter_postive_number("\nenter account balance: ");
    return data;
}

string convert_data_into_single_line(stdata data, string delmi = "#//#")
{
    return (data.account_number + delmi + to_string(data.pin) + delmi + data.name + delmi + data.phone + delmi + to_string(data.account_balance));
}

void load_data_to_file(string path, stdata data)
{
    fstream write;
    write.open(path, ios::out | ios::app);
    if (write.is_open())
    {
        write << convert_data_into_single_line(data) << endl;
        write.close();
    }
}

void start(string path, stdata data)
{
    char choice ='Y' ;

    do
    {
        data = fill_data();
         load_data_to_file(path,data);
         cout<<"\ntransfered data to file successfully!";
         cout<<" ,Do you want to add anoter clinets: ";
         cin>>choice;

    } while ( choice=='y'||choice == 'Y');
}

int main(){
    stdata data ; 
    start("convert_data_into_singleLine.text",data);
}