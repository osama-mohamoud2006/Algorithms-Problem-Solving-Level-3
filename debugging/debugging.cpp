#include <iostream>
#include <iomanip>

#include "E:\projects\my library\AllStuff.h"
using namespace AllStuff;
using namespace std;


bool is_palindorme(short matrix[3][3], short row, short col)
{
    for (int r = 0; r < row; r++)
    {
        for (int c = 0; c < col/2; c++)
        {
            // ???? ??? ?? ?? ????? ?? ?????? ??? ???
            if (matrix[r][c] != matrix[r][col - 1 - c]) return false;//--> walk through 2columns only 
            //the first c and the last c
            //this happened bcz of the eq [col - 1 - c]
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

    matrix[0][0] = 1; matrix[0][1] = 2; matrix[0][2] = 1;
    matrix[1][0] = 5; matrix[1][1] = 5; matrix[1][2] = 5;
    matrix[2][0] = 7; matrix[2][1] = 3; matrix[2][2] = 7;


    cout << "\nMatrix elements:\n";
    print(matrix, 3, 3);

    is_palindorme(matrix, 3, 3) ? cout << "\nPalindrome!\n" : cout << "\nNot Palindrome!\n";

    cout << endl;
    return 0;
}
