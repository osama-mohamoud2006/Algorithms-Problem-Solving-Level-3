#include <fstream>
#include <iostream>
#include <vector>
#include "E:\projects\my library\AllStuff.h"
using namespace std;
using namespace AllStuff;
const string path = "convert_data_into_singleLine.text";
const string delmi = "#//#";
struct stdata
{
    string account_number = " ";
    string pin = "";
    string name = " ";
    string phone = " ";
    string account_balance = " ";
};

vector<string> SplitString(string line, string delmi = "#//#")
{
    vector<string> data;
    short pos = 0;
    string sword;
    while ((pos = line.find(delmi)) != string::npos)
    {
        sword = line.substr(0, pos);
        if (sword != "")
            data.push_back(sword);

        line.erase(0, pos + delmi.length());
    }
    if (line != "")
        data.push_back(line);
    return data;
}

// convert line into raw data
stdata convert_line_to_record(string line)
{
    stdata data;
    vector<string> vdata;

    vdata = SplitString(line);

    data.account_number = vdata.at(0);
    data.pin = vdata.at(1);
    data.name = vdata.at(2);
    data.phone = vdata.at(3);
    data.account_balance = vdata.at(4);

    return data;
}

vector<stdata> load_file(string path)
{
    vector<stdata> BlockOfDATA;
    fstream read;
    read.open(path, ios::in);
    if (read.is_open())
    {
        string line;
        stdata data;
        while (getline(read, line))
        {
            data = convert_line_to_record(line);
            BlockOfDATA.push_back(data);
        }
        read.close();
    }
    return BlockOfDATA;
}

bool is_account_number_exist(stdata &client, string account_number_to_search)
{
    vector<stdata> dataFromfile = load_file(path);

    for (stdata c : dataFromfile)
    {
        if (c.account_number == account_number_to_search)
        {
            client = c;
            return true;
        }
    }
    return false;
}

void print_client_data(stdata data)
{
    cout << "account balance is: " << data.account_balance << endl;
    cout << "account number is: " << data.account_number << endl;
    cout << "Name: " << data.name << endl;
    cout << "phone: " << data.phone << endl;
    cout << "pin is: " << data.pin << endl;
}

// convert  struct into record again
string convert_struct_to_single_line(stdata data)
{
    return (data.account_number + delmi + (data.pin) + delmi + data.name + delmi + data.phone + delmi + (data.account_balance));
}

// remove the record
void open_file_and_delete(string lineRecord)
{
    fstream read;
    read.open(path, ios::in);
    if (read.is_open())
    {
        string record_to_check;
        while (getline(read, record_to_check))
        {
            if (lineRecord == record_to_check)
                record_to_check = "";
        }
        read.close();
    }
}

bool read_choice()
{
    char choice = ' ';
    cin >> choice;
    if (toupper(choice) == 'Y')
        return true;
    else
        false;
}

void start()
{
    string account_number = read_string("enter account number to check if exist or not: ");
    stdata Cdata;

    if (is_account_number_exist(Cdata, account_number) == true)
    {
        print_client_data(Cdata);
        cout << endl;
        cout << "do you sure you want to delete this client record [y,n]: ";
    }
    else
        cout << "the account number: " << account_number << " isn't exist! " << endl;
}