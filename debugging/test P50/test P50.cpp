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
    else cout << "file isn't exist !!!" << endl;
    return BlockOfDATA;
}

bool is_account_number_exist(stdata& client, string account_number_to_search)
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



// push file data to vector to make edit
vector<string> push_all_file_data_into_vector( string path) {

    vector<string> Ndata;
    fstream read; 
    read.open(path, ios::in); //read mode

    if (read.is_open()) {
        string line_of_data=" ";
        while (getline(read, line_of_data))
        {
            Ndata.push_back(line_of_data);
        }
        read.close();
    }

}

//write new data to file 
void push_new_data(vector<string> vdatalines) {
    fstream write;

    write.open(path, ios::out);
    if (write.is_open()) {

        for (string& Nline : vdatalines) {
            write << Nline << endl;
        }
        write.close();
    }
}

// remove the record
void open_file_and_delete_record(string lineRecord )
{
    vector<string> file;
    file = push_all_file_data_into_vector(path);

    for (string& vfile : file) {
        if (vfile == lineRecord) vfile = "";
    }

    push_new_data(file);
    cout << "\nThe data of client's record deleted !" << endl;
    screen_color(green);
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

        string record = convert_struct_to_single_line(Cdata); // convert struct into record 

        cout << endl;
        cout << "do you sure you want to delete this client record [y,n]: ";

        if (read_choice() == true)
        {
            open_file_and_delete_record(record);
        }



    }
 
}

int main()
{
    start();
}