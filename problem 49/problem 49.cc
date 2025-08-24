#include <fstream>
#include <iostream>
#include <vector>
#include "E:\projects\my library\AllStuff.h"
using namespace std;
using namespace AllStuff;
const string path = "convert_data_into_singleLine.text";
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

// return vector filled with stdata
vector<stdata> load_data_from_file(string path)
{
    vector<stdata> StdataINVEctor;
    fstream read;
    read.open(path, ios::in);
    if (read.is_open())
    {
        string line;
        stdata data;
        while (getline(read, line))
        {
            data = convert_line_toRecord(line);
            StdataINVEctor.push_back(data);
        }
        read.close();
    }
    return StdataINVEctor;
}

void print_client_data(stdata data)
{
    cout << "account balance is: " << data.account_balance << endl;
    cout << "account number is: " << data.account_number << endl;
    cout << "Name: " << data.name << endl;
    cout << "phone: " << data.phone << endl;
    cout << "pin is: " << data.pin << endl;
}

bool check_if_account_number_is_exist(stdata &client, string account_number_to_search)
{
    vector<stdata> Vfile = load_data_from_file(path);
    for (stdata C : Vfile)
    {
        if (C.account_number == (account_number_to_search))
        {
            client = C;
            return true;
        }
    }

    return false;
}

void start()
{
    string accNum_to_search = read_string("enter account number  to check:");

    stdata data;
    if (check_if_account_number_is_exist(data, accNum_to_search) == true)
    {
        print_client_data(data);
    }

    else
        cout << "the account number: " << accNum_to_search << " isn't exist! " << endl;
}

int main()
{
    start();
}
