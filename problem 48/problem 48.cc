#include <fstream>
#include <iostream>
#include <vector>
#include <iomanip>
#include <limits>
#include "E:\projects\my library\AllStuff.h"
using namespace std;
using namespace AllStuff;

struct stdata
{
    string account_number = " ";
    int pin = 0;
    string name = " ";
    string phone = "";
    int account_balance = 0;
};

const string path = "convert_data_into_singleLine.text";

// split string
vector<string> split_string(string line_of_record, string delmi = "#//#")
{
    vector<string> dataFromRecordSplitedIntoIndex;
    short pos = 0;
    string sword;
    while ((pos = line_of_record.find(delmi)) != string::npos)
    {
        sword = line_of_record.substr(0, pos);
        if (sword != "")
            dataFromRecordSplitedIntoIndex.push_back(sword);
        line_of_record.erase(0, pos + delmi.size());
    }
    if (line_of_record != "")
        dataFromRecordSplitedIntoIndex.push_back(line_of_record);

    return dataFromRecordSplitedIntoIndex;
}

// fill struct with record data
stdata convert_line_to_record(string line, string delmi = "#//#")
{
    // take the record and splited it into raw data then fill struct with it using vector then return struct with data
    stdata data;
    vector<string> dataSplited;
    dataSplited = split_string(line);
    data.account_number = dataSplited[0];
    data.pin = stoi(dataSplited[1]);
    data.name = dataSplited[2];
    data.phone = dataSplited[3];
    data.account_balance = stoi(dataSplited[4]);

    return data;
}

// read data from file and push it to vector
vector<stdata> Read_file(string path)
{
    vector<stdata> vdata;
    fstream read;
    read.open(path, ios::in);
    if (read.is_open())
    {
        stdata data;
        string record = " ";
        while (getline(read, record))
        {

            data = convert_line_to_record(record);
            vdata.push_back(data);

        }
        read.close();
    }
    return vdata;
}

void print_header(int num)
{
    cout << "\t" << "clients " << num << endl
        << endl;
    cout << "+---------------+----------+--------------------+---------------+------------+" << endl;
    cout << "| " << left
        << setw(13) << "Account Num" << " | "
        << setw(8) << "Pin" << " | "
        << setw(18) << "Name" << " | "
        << setw(13) << "Phone" << " | "
        << setw(10) << "Balance" << " |"
        << endl;
    cout << "+---------------+----------+--------------------+---------------+------------+" << endl;
}

void printStruct(vector<stdata> vdata)
{
    print_header(vdata.size());
    for (stdata data : vdata) {
        cout << "| " << left
            << setw(13) << data.account_number << " | "
            << setw(8) << data.pin << " | "
            << setw(18) << data.name << " | "
            << setw(13) << data.phone << " | "
            << right
            << setw(10) << data.account_balance << " |"
            << endl;
        cout << "+---------------+----------+--------------------+---------------+------------+" << endl;
    }
}

int main()
{
    vector <stdata> final = Read_file(path);
    printStruct(final);
}