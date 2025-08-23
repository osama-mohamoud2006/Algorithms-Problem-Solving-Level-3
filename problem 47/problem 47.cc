#include <fstream>
#include <iostream>
#include <limits>
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

void load_data_to_file(string path, string LineOFData)
{
    fstream write;
    write.open(path, ios::out | ios::app);
    if (write.is_open())
    {
        write << LineOFData << endl;
        write.close();
    }
}

void AddNewClient(string path)
{
    stdata data;
    data = fill_data();
    load_data_to_file(path, convert_data_into_single_line(data));
}

void start(string path)
{
    char choice = 'Y';

    do
    {
        system("cls");
        cout << "Adding client:\n\n";

        AddNewClient(path);

        cout << "\ntransfered data to file successfully!";
        cout << " ,Do you want to add anoter clinets: ";
        cin.clear();
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        cin >> choice;

    } while (toupper(choice) == 'Y');
}

int main()
{

    start("convert_data_into_singleLine.text");
}