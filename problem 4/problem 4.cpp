#include<iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>
using namespace std;

int random(int from, int to) {
	return rand() % (to - from + 1) + from;
}

void fill_2D_array_with_random_numbers(int arr[3][3], short rows , short columns ) {

	for (int r = 0; r < rows; r++) {
		for (int c = 0; c < columns; c++) {
			arr[r][c] = random(1, 100);
		}
	}

}

int the_sum_of_columns(int arr[3][3], short c,short rows) {
	int sum = 0;
	for (int r = 0; r < rows; r++) {
		sum += arr[r][c];
	}
	return sum; 
}

void print_the_sum_of_each_col(int arr[3][3] , short rows, short columns) {
	cout << "\n";
	for (int c = 0; c < columns; c++) {

		cout << "the " << "sum of" << " col " << c + 1 << " is = "<< the_sum_of_columns(arr,c, rows) << endl;
	}

}
void print_the_array(int arr[3][3], short rows, short columns) {

	for (int r = 0; r < rows; r++) {
		for (int c = 0; c < columns; c++) {
			cout<<setw(3)<<arr[r][c]<<" ";
		}
		cout << endl;
	}

}

int main() {

	srand((unsigned)time(NULL));

	int arr[3][3];
	fill_2D_array_with_random_numbers(arr, 3, 3);

	cout << "\nthe elements of matrix 3x3 are: \n";
	print_the_array(arr, 3, 3);

	cout << "\nthe sum of each col is: ";
	print_the_sum_of_each_col(arr, 3, 3);
}