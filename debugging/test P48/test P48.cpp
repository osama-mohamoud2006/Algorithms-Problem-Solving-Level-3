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
// read data from file and push it to vector
vector<string> ReadFileContentAndPushItToVector(string path)
{
    vector<string> data_from_file;
    fstream read;
    read.open(path, ios::in); // read mode
    if (read.is_open())
    {
        string line = "";
        while (getline(read, line))
        {
            data_from_file.push_back(line);
        }
        read.close();
    }

    return data_from_file;
}

// split string
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

stdata fillStructData(vector<string> dataSplited)
{
    stdata data;
   

    data.account_number = dataSplited.at(0);
    data.pin = stoi(dataSplited.at(1));
    data.name = dataSplited.at(2);
    data.phone = dataSplited.at(3);
    data.account_balance = stoi(dataSplited.at(4));
    return data;
}

void printStruct(stdata data)
{
   

    cout << data.account_number << setw(20)<< data.pin << setw(20)<< data.name << setw(20)<< data.phone << setw(15)<<  data.account_balance;
    
   
   
    cout  << endl;
}

void test()
{
    stdata data;
    vector<string> vfile_content;
    vector<string> afterSplited;
    // push file content to vector
    vfile_content = ReadFileContentAndPushItToVector(path);
    cout << "\naccount number " << setw(10) << "pin" << setw(17) << "name" << setw(20) << "phone" << setw(20) << "account balance" << endl;
    for (int i = 0; i < vfile_content.size(); i++) // access each record
    {
        afterSplited = split_string(vfile_content[i]);
        data = fillStructData(afterSplited);
        printStruct(data);

    }
}

int main() {
    test();
}