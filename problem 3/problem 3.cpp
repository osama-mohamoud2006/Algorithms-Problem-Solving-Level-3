#include <iostream>
#include<iomanip>
#include<cstdlib>
#include <ctime>
using namespace std;

//generate random number
int random(int from, int to) {
    return rand() % (to - from + 1) + from;
}

//fill array with random numbers
void random_number_in_2darray(int arr[3][3], short rows, short columns) {
    for (int i = 0; i < rows; i++) {
        for (int i2 = 0; i2 < columns; i2++) {
            arr[i][i2] = random(1, 100);//store random number in 2d array 
        }
    }
}

// sum of each row[0][c]
int sum_of_the_columns_in_each_row(int arr[3][3], short rows_from_function, short columns) {

    /*                           c=0  c=1   c=2
    * R=0  sum of these elemetns   4   5    7  --> 4+5+7
    * R=1  sum of these elemetns   6   7    4--> 6+7+4
    */

    //this function takes row number from another function and returns the sum of elements in this row 
    int sum = 0;
    for (int c = 0; c < columns; c++)
        sum += arr[rows_from_function][c];

    return sum;
}

//fill 1d array with sum 
void fill_array_With_the_number(int arr[3], short number , short &length ) {

    length++;
    arr[length - 1] = number;
}

void fill_array_With_the_sum_of_each_row(int arr[3][3],int arrres[3], short rows, short columns , short &length) {

    //this function pass the row index to another function to get the sum of the elements in each row 
    cout << "\nthe follwing are the sum of each Row in the matrix :\n";
    for (short r = 0; r < rows; r++) {

        fill_array_With_the_number(arrres, sum_of_the_columns_in_each_row(arr, r, columns), length);

    }
    

}


//print array 
void array_print( int arrres[3]) {

    for (int i = 0; i < 3;  i++) 
        cout << " Row " << i + 1 << " sum = " << arrres[i] << endl;
    

}
void array_print(int arr[3][3], short rows, short columns) {
    for (int i = 0; i < rows; i++) {
        for (int i2 = 0; i2 < columns; i2++) {
            cout << setw(5) << arr[i][i2] << setw(5);
        }
        cout << endl;
    }
}

int main() {
    srand((unsigned int)time(NULL));
    int arr[3][3];
    int arrres[3];
    short length = 0; 

    random_number_in_2darray(arr, 3, 3);
    cout << "\nthe folowing is 3x3 random matrix: \n";
    array_print(arr, 3, 3);
    
    //print the sum in 1d array 
    fill_array_With_the_sum_of_each_row( arr,  arrres, 3, 3 , length);
    array_print(arrres);



    system("pause>0");
}

