#include <fstream>
#include <iostream>
#include <vector>
#include "E:\projects\my library\AllStuff.h"
using namespace std;
using namespace AllStuff;

struct stdata
{
    string account_number = " ";
    string pin = "";
    string name = " ";
    string phone = "";
    string account_balance = "";
};

vector<string> split_string(string s, string delmi = "#//#")
{

    short pos = 0;
    vector<string> res;
    string sword;
    while ((pos = s.find(delmi)) != string::npos)
    {
        sword = s.substr(0, pos);
        if (sword != "")
            res.push_back(sword);
        s.erase(0, pos + delmi.length());
    }
    if (s != "")
        res.push_back(s);
    return res;
}

// fill stdata from line
stdata convert_line_toRecord(string line)
{
    stdata data;
    vector<string> dataSplited;
    dataSplited = split_string(line);

    data.account_number = dataSplited.at(0);
    data.pin = dataSplited.at(1);
    data.name = dataSplited.at(2);
    data.phone = dataSplited.at(3);
    data.account_balance = dataSplited.at(4);
    return data;
}

void print(stdata data)
{
    cout << "the account number is: " << data.account_number << endl;
    cout << "your pin is: " << data.pin << endl;
    cout << "your name is: " << data.name << endl;
    cout << "your phone is: " << data.phone << endl;
    cout << "your account balance is: " << data.account_balance << endl;
}

int main()
{
    // 120123#//#1234#//#osama mohamoud#//#21010319032#//#10000
    stdata data;

    data = convert_line_toRecord("245164#//#1234#//#osama mohamoud#//#+20 101214456#//#10000$");

    print(data);
}
