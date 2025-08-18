// 1 - random function
// 2- fill array with random number
// 3- get the sum of each matrix
// 4- check if the both sum are equal
#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include <ctime>
using namespace std;
string res(int i){
  string res_arr[]={"NOT",""};
  return res_arr[i];
}
int random(int from, int to)
{
    return rand() % (to - from + 1) + from;
}

void fill_array_with_random_number(int arr[3][3], int row, int col)
{
    for (int r = 0; r < row; r++)
    {
        for (int c = 0; c < col; c++)
        {
            arr[r][c] = random(1, 10);
        }
    }
}

int sum_of_elements_in_matrix(int arr[3][3], int row, int col)
{
    int sum = 0;
    for (int r = 0; r < row; r++)
    {
        for (int c = 0; c < col; c++)
        {
            sum += arr[r][c];
        }
    }
    return sum ;
}

bool check_if_the_2_matrices_are_equal(int arr1sum, int arr2sum)
{
    bool res = false;
    (arr1sum == arr2sum) ? res = true : res = false;
    return res;
}

void print_matrix(int arr[3][3], int row, int col)
{
    
    for (int r = 0; r < row; r++)
    {
        for (int c = 0; c < col; c++)
        {
            printf("%02d ", arr[r][c]);
        }
        cout<<endl;
    }
}

int main()
{
    srand((unsigned)time(NULL));
    int arr[3][3];
    int arr2[3][3];

    //array 1
     fill_array_with_random_number( arr, 3, 3);
     cout<<"\nmatrix 1:\n";
      print_matrix( arr, 3, 3);

      //array 2
       fill_array_with_random_number( arr2, 3, 3);
       cout<<"\nmatrix 2:\n";
       print_matrix( arr2, 3, 3);

       (check_if_the_2_matrices_are_equal(  sum_of_elements_in_matrix( arr, 3, 3),
        sum_of_elements_in_matrix( arr2, 3, 3))) ? cout<<"\nYes:":cout<<"\nNo:";

  cout<<"Matrices are "<<res(check_if_the_2_matrices_are_equal(sum_of_elements_in_matrix( arr, 3, 3),           sum_of_elements_in_matrix( arr2, 3, 3)))<<" equal."; 




}