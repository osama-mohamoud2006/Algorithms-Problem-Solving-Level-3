#include <iostream>
using namespace std;


void print(int arr[3][3], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int i2 = 0; i2 < col; i2++)
        {
            cout << arr[i][i2] << " ";
        }
        cout << endl;
    }
}

bool is_identity(int arr[3][3], int row, int col)
{
    if (row != col)
        return false;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (i == j)
            {
                if (arr[i][i] != 1)
                    return false;
            }

            else {if(arr[i][j]!=0) return false;}
        }
    }

  
    return true;
}

int main()
{
    int arr[3][3];
    arr[0][0] = 1;
    arr[0][1] = 0;
    arr[0][2] = 0;
    arr[1][0] = 0;
    arr[1][1] = 1;
    arr[1][2] = 0;
    arr[2][0] = 0;
    arr[2][1] = 0;
    arr[2][2] = 1;

    cout << "\nMatrix\n";
    print(arr, 3, 3);

    (is_identity(arr, 3, 3) == true) ? cout << "\nYes,matrix is identity!\n" : cout << "\nNO,the matrix isn't identity!\n";
}