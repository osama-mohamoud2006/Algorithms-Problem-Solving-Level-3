#include <iostream>
#include <cstdio>
#include <stdio.h>
#include <ctime>
using namespace std;

int random(int from, int to)
{
    return rand() % (to - from + 1) + from;
}

void fill_array_with_random(short arr[3][3], short row, short col)
{
    for (int r = 0; r < row; r++)
    {
        for (int c = 0; c < col; c++)
        {
            arr[r][c] = random(1, 10);
        }
    }
}

void print(short arr[3][3], short row, short col)
{
    for (int r = 0; r < row; r++)
    {
        for (int c = 0; c < col; c++)
        {
            printf("%02d ", arr[r][c]);
        }
        cout << endl;
    }
}

bool are_typical_matrices(short arr[3][3], short arr2[3][3], short row, short col)
{
    for (short i = 0; i < row; i++)
    {
        for (short j = 0; j < col; j++)
        { 
            if(arr[i][j]!=arr2[i][j]) return false;
        }
    }

    return true;
}

int main(){
    srand((unsigned)time(NULL));
    short matrix1[3][3];
    short matrix2[3][3];
    
    //matrix 1
     fill_array_with_random( matrix1, 3, 3);
     cout<<"\nMatrix1\n";
     print( matrix1, 3, 3);

     //matrix 2
      fill_array_with_random( matrix2, 3, 3);
       cout<<"\nMatrix2\n";
       print( matrix2, 3, 3);

(are_typical_matrices(matrix1,matrix2,3,3)==true)?cout<<"\nYes,matrices are typical!\n" :
cout<<"\nNO,matrices are n't typical!\n";


}