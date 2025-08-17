#include <iostream>
#include<iomanip>
#include<stdio.h>
#include <ctime>
using namespace std;

int random(int from , int to){
    return rand()%(to-from+1)+from;
}

void fill_array_with_raondom_number(int arr[3][3], short row , short col){
  for(int i=0; i<row; i++){
    for(int i2=0; i2<col; i2++ ){
        arr[i][i2]= random(1,10);
    }
  }
}

void multi_2_matrices(int arr[3][3], int arr2[3][3],int arrres[3][3],short row , short col){

     for(int i=0; i<row; i++){
    for(int i2=0; i2<col; i2++ ){
        int n1 =  arr[i][i2];
         int n2 =  arr2[i][i2];
      arrres[i][i2] =n1*n2;
    }
  }

}

void print_matrix(int arrPrintp[3][3],short row , short col){
     for(int i=0; i<row; i++){
    for(int i2=0; i2<col; i2++ ){
         printf("%02d",arrPrintp[i][i2]);
         cout<<" ";
    }
    cout<<endl;
  }
}

int main(){

    int arr[3][3];
    int arr2[3][3];
    int arrres[3][3];

    //fill array 1
     fill_array_with_raondom_number( arr, 3 , 3);
     cout<<"\nmatrix 1\n";
      print_matrix(arr, 3 , 3);
          
      //fill array 2
       cout<<"\nmatrix 2\n";
       fill_array_with_raondom_number( arr2, 3 , 3);
        print_matrix(arr2, 3 , 3);

        // arr1 * arr2
         cout<<"\n\nmatrix res\n";
        multi_2_matrices( arr,  arr2, arrres,3 , 3);
            print_matrix(arrres, 3 , 3);
cout<<endl;
}