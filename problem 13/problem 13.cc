#include <iostream>
#include <iomanip>
using namespace std;

void print(int arr[3][3], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int i2 = 0; i2 < col; i2++)
        {
            cout << setw(3) << arr[i][i2] << " ";
        }
        cout << endl;
    }
}

bool is_scalar(int arr[3][3], int row, int col)
{

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            // check the diagonal
            if (i == j)
            {
                if (arr[i][i] != 1)
                    return false;
            }

            // check the rest of elements
            else
            {
                if (arr[i][j] != 0)
                    return false;
            }
        }
    }

    return true;
}

int main()
{
    int arr1[3][3];
    arr1[0][0] = 1;
    arr1[0][1] = 0;
    arr1[0][2] = 0;
    arr1[1][0] = 0;
    arr1[1][1] = 1;
    arr1[1][2] = 0;
    arr1[2][0] = 0;
    arr1[2][1] = 0;
    arr1[2][2] = 1;

    int arr2[3][3];
    arr2[0][0] = 1;
    arr2[0][1] = 0;
    arr2[0][1] = 1;
    arr2[1][0] = 0;
    arr2[1][1] = 1;
    arr2[1][1] = 0;
    arr2[2][0] = 1;
    arr2[2][1] = 0;
    arr2[2][2] = 0;

    cout << "\n  Matrix\n";
    print(arr1, 3, 3);

    (is_scalar(arr1, 3, 3) == true) ? cout << "\nYes,matrix is identity!\n" : cout << "\nNO,the matrix isn't identity!\n";
}