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

bool is_identity(int arr[3][3], int row, int col)
{
    int intialize = arr[0][0];
    for (int r = 0; r < row; r++)
    {
        for (int c = 0; c < col; c++)
        {
            if (r == c)
            {
                if (arr[r][c] != intialize)
                    return false;
            }

            else
            {
                if (arr[r][c] != 0)
                    return false;
            }
        }
    }
    return true ;
}

int main()
{
    int arr1[3][3];

     arr1[0][0]=9; arr1[0][1]=0; arr1[0][2]=0;
     arr1[1][0]=0; arr1[1][1]=9; arr1[1][2]=0;
     arr1[2][0]=0; arr1[2][1]=0; arr1[2][2]=9;
   
      cout<<setw(3)<<"\nmatrix\n";
     print(arr1,3,3);

      is_identity( arr1, 3, 3)?cout<<"\nYes,scalar matrix\n":
      cout<<"\nNot,scalar matrix\n";


}