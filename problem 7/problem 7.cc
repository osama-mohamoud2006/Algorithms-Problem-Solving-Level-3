#include <iostream>
#include <iomanip>
using namespace std;

void fill_matrix_with_ordered_numbers_from_1to9(int arr[3][3], short row , short col){
    short count =0 ;
         for(int i=0; i<row; i++){
            for(int i2=0; i2<col; i2++){
                    count++;
                    arr[i][i2]=count;
            }
         }
}

void transpose_martix(int arr[3][3], int tarr[3][3],short row , short col){
    /*
    خلي الصف عمود 
    */

         for(int i=0; i<row; i++){ //row
            for(int i2=0; i2<col; i2++){ // col 
            /// i2--> عمود --> صف 
                     tarr[i][i2]=arr[i2][i];
            }
            cout<<endl;
         }

}

void print(int arr[3][3], short row , short col){
 
         for(int i=0; i<row; i++){
            for(int i2=0; i2<col; i2++){
                  
                   cout<<setw(3)<< arr[i][i2]<<setw(3);
            }
            cout<<endl;
         }
}

int main(){
    int arr[3][3];
    int tarr[3][3];
fill_matrix_with_ordered_numbers_from_1to9( arr, 3 , 3);
cout<<"\nthe following is 3x3 ordered matrix:\n";
print( arr, 3 , 3);


transpose_martix( arr,tarr,3 , 3);
cout<<"\nthe following is 3x3 transposed matrix:\n";
print( tarr, 3 , 3);

}