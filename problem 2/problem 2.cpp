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

//print array 
void array_print(int arr[3][3], short rows, short columns) {
    for (int i = 0; i < rows; i++) {
        for (int i2 = 0; i2 < columns; i2++) {
            cout << setw(5) << arr[i][i2] << setw(5);
        }
        cout << endl;
    }
}

// sum of each row[0][c]
int sum_of_the_columns_in_each_row(int arr[3][3], short rows_from_function, short columns) {
    
    int sum = 0;
    for (int c = 0; c < columns; c++) {
        sum += arr[rows_from_function][c];
    }
    return sum; 
}

void print_sum_of_each_row(int arr[3][3], short rows, short columns) {
    cout << "\nthe follwing are the sum of each Row in the matrix :\n";

    for (short r = 0; r < rows; r++) {
        cout << " Row " << r + 1 << " sum = " << sum_of_the_columns_in_each_row(arr, r, columns) << endl;
    }
}

int main() {
    srand((unsigned int)time(NULL));
    int arr[3][3];

    random_number_in_2darray(arr, 3, 3);
    cout << "\nthe folowing is 3x3 random matrix: \n";
    array_print(arr, 3, 3);

    print_sum_of_each_row(arr, 3, 3);
  
   

    system("pause>0");
}

