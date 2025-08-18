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

bool is_number_in_matrix(short arr[3][3], short number, short row, short col)
{
    for (short i = 0; i < row; i++)
    {
        for (short j = 0; j < col; j++)
        {
            if (arr[i][j] == number)
                return true;
        }
    }
    return false;
}

void intersect_numbers(short arr[3][3], short arr2[3][3], short row, short col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            short number = arr[i][j]; // number from matrix 1 ,we will use it in function to search the number in the second array
            if (is_number_in_matrix(arr2, number, row, col))
                cout << arr[i][j] << " ";
        }
    }
}

void print(short arr[3][3], short row, short col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << setw(3) << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    srand((unsigned)time(NULL));
    short arr[3][3];
    short arr2[3][3];
    // array 1
    fill_array_with_random_number(arr, 3, 3);
    cout << "\nMatrix elements:\n";
    print(arr, 3, 3);

    // array 2
    fill_array_with_random_number(arr2, 3, 3);
    cout << "\nMatrix2 elements:\n";
    print(arr2, 3, 3);

    cout << "\nthe intersected elements are: ";
    intersect_numbers(arr, arr2, 3, 3);
    cout << endl;
}
