#include <iostream>
#include <iomanip>
using namespace std;

void ordered_matrix(int arr[3][3] , short row , short col){
    int count =0 ; 
   for(int i=0; i<row; i++){
    for(int i2=0; i2<col; i2++){
        count++;
        arr[i][i2]=count;
    }
    
   }
}

void print(int arr[3][3] , short row , short col){
    for(int i=0; i<row; i++){
    for(int i2=0; i2<col; i2++){
        
        cout<<setw(3)<<arr[i][i2]<<setw(3);
    }
    cout<<endl;
   }
}

int main(){
    int arr[3][3];
ordered_matrix( arr , 3 , 3);
cout<<"\nthe ordered matrix:\n";
print( arr , 3 , 3);

}