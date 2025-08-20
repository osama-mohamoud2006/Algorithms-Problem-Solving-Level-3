#include <iostream>
#include <iomanip>
#include "E:\projects\my library\AllStuff.h"
using namespace AllStuff;
using namespace std;

bool is_palindorme(short matrix[3][3], short row, short col)
{
    for (short i = 0; i < row; i++)
    {
        for (short j = 0; j < col/2; j++)
        {
            if(matrix[i][j]!=matrix[i][col-1-j]) return false;
        }
    }
    return true;
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

    short matrix[3][3];

    matrix[0][0] = 1;
    matrix[0][1] = 2;
    matrix[0][2] = 1;
    matrix[1][0] = 5;
    matrix[1][1] = 5;
    matrix[1][2] = 5;
    matrix[2][0] = 7;
    matrix[2][1] = 3;
    matrix[2][2] = 7;

    cout << "\nMatrix elements:\n";
    print(matrix, 3, 3);

     is_palindorme(matrix, 3, 3) ? cout << "\nPalindrome!\n" : cout << "\nNot Palindrome!\n";

    cout << endl;
    return 0;
}
