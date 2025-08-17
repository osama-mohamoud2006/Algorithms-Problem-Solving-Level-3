#include <iostream>
#include<stdio.h>
#include <cstdio>
#include<ctime>
 using namespace std; 

 int random(int from , int to){return rand()%(to-from+1)+from;}
 void fill_function_with_random_numbers(int arr[3][3], int row , int col){
    for(short r=0; r<row; r++){
        for(short c=0; c<col; c++){
            arr[r][c]=random(1,10);
        }
    }
 }
 int sum_of_matrix(int arr[3][3], int row , int col){
    int sum =0 ;
      for(int r=0; r<row; r++){
        for(int c=0; c<col; c++){
           sum+= arr[r][c];
        }
    }
    return sum ; 
}
 void print(int arr[3][3], int row , int col){
      for(short r=0; r<row; r++){
        for(short c=0; c<col; c++){
            printf("%02d ",arr[r][c]);
        }
        cout<<endl;
    }
 }

 int main()
 {
    srand((unsigned)time(NULL));
    int arr[3][3];

    
     fill_function_with_random_numbers(arr, 3 , 3);
     cout<<"\nthe elements in matrix are: \n";
    print(arr, 3 , 3);

    printf("\nthe sum of elements in matrix is: %02d",sum_of_matrix(arr, 3 , 3)); 

  cout<<endl;
 }