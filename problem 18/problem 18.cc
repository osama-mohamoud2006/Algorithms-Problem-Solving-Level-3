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

bool is_number_in_matrix(short arr[3][3], short number, short arr2[3][3], short row, short col)
{
    
}


void intersect_numbers(short arr[3][3], short arr2[3][3], short row, short col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] == arr2[i][j])
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
