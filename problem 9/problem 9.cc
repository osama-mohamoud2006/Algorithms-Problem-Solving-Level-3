#include <iostream>
#include<stdio.h>
#include <cstdio>
#include<ctime>
 using namespace std; 
int random(int from , int to){return rand()%(to-from+1)+from;}

 void fill_matrix_with_random(int arr[3][3], short col , short row ){

        for(int r=0; r<row; r++)
        {
            for(int c=0; c<col; c++){
        
                arr[r][c]=random(1,10);
            }
        }
 }

  void print_middle_row(int arr[3][3], short col , short row)
 {
    //r =1 --> middle
    short MiddleRow = row/2;
            for(int c=0; c<col; c++){
        
                 printf("%02d ", arr[MiddleRow][c]);
            }
 }

void print_middle_col(int arr[3][3], short col , short row)
 {
    //c =1 --> middle
    short MiddleCol = col/2;
            for(int r=0; r<row; r++){
        
              printf("%02d ", arr[r][MiddleCol]);
            }
 }

 void print(int arr[3][3], short col , short row){

        for(int r=0; r<row; r++)
        {
            for(int c=0; c<col; c++){
        
              printf("%02d ",arr[r][c]);
            }
            cout<<endl;
        }

 }
 

 int main()
 {
   srand((unsigned)time(NULL));
   int arr[3][3];

       fill_matrix_with_random( arr, 3 , 3 );
 cout<<"\nthe matrix 1:\n";
       print( arr, 3 , 3 );
          
       cout<<"\n\nthe middle row of the matrix is:\n";
       print_middle_row( arr, 3 , 3 );

     cout<<"\n\nthe middle col of the matrix is:\n";
          print_middle_col( arr, 3 , 3 );

    cout<<endl<<"\n";
    return 0;

 }