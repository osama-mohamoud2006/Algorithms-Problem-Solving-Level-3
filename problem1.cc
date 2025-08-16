#include <iostream>
#include<iomanip>
#include<cstdlib>
#include <ctime>
using namespace std;

//generate random number
int random(int from , int to){
    return rand()%(to-from+1)+from;
}

//fill array with random numbers
void random_number_in_2darray(int arr[3][3]){
    for(int i=0; i<3; i++){
        for(int i2=0; i2<3; i2++){
            arr[i][i2]=random(1,100);//store random number in 2d array 
        }
    }
}

void array_print(int arr[3][3]){
for(int i=0; i<3; i++){
        for(int i2=0; i2<3; i2++){
            cout<<arr[i][i2]<<setw(5);
        }
        cout<<endl;
    }
}

void final_output(int arr[3][3]){
    cout<<"\nthe folowing is 3x3 random matrix \n";
     array_print( arr);
}

int main(){
    int arr[3][3] ;
    final_output(arr);
}
