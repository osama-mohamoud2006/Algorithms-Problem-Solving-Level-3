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

int max(short arr[3][3], short row, short col){
    int maxv=0;
     for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
           if(arr[i][j]>maxv) maxv= arr[i][j];
        }
    }
   return maxv;
}

int min(short arr[3][3], short row, short col){
    int minv=arr[0][0];
     for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
           if(arr[i][j]<minv) minv= arr[i][j];
        }
    }
   return minv;
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
    
    // array 1
    fill_array_with_random_number(arr, 3, 3);
    cout << "\nMatrix elements:\n";
    print(arr, 3, 3);


    cout<<"\nthe max value is: "<<max(arr,3,3)<<endl;
     cout<<"the min value is: "<<min(arr,3,3)<<endl;
     cout<<endl;
     return 0;
   
}
