#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include "E:\projects\my library\AllStuff.h"
using namespace AllStuff;
using namespace std;

void fill_array_with_random_number(short arr[3][3], short row, short col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            arr[i][j] = random(1, 100);
        }
    }
}

bool is_number_exist(short arr[3][3], short number, short row, short col)
{

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (number == arr[i][j])
                return true;
        }
    }
    return false;
}

void print(short arr[3][3],  short row, short col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
           cout<<setw(3)<< arr[i][j]<< " ";
                
        }
        cout<<endl;
    }
}

int main()
{
    short arr[3][3];
    fill_array_with_random_number(arr,3,3);
    cout<<"\nMatrix elements:\n";
    print(arr,3,3);

    short number = enter_postive_number("\nenter number to search if exist or not: ");
( is_number_exist(arr,number,3,3)==true)?cout<<"\nthe number is exist!\n":
cout<<"\nthe number isn't exist!\n";

}
