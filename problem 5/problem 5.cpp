#include<iostream>
#include <ctime>
#include <cstdlib>
#include<iomanip>
using namespace std;

int random(int from, int to) {
	return rand() % (to - from + 1) + from;
}

void fill_array_with_random_numbers(int arr[3][3],int clo , int row) {
	for (int r = 0; r < row; r++) {
		for (int c = 0; c < clo; c++) {
			arr[r][c] = random(1, 100);
		}
	}
}

int sum_of_col(int arr[3][3], int clo, int row) {
	int sum = 0; 
	for (int r = 0; r < row; r++) 
		sum += arr[r][clo];
	
	return sum; 
}

void fill_array2_with_sum(int arr2[3] , int arr[3][3] , int clo, int row) {
	for (int i = 0; i < row; i++) 
		arr2[i] = sum_of_col(arr, i, row); 
	
}

void print_res(int arr[3][3], int clo, int row) {
	for (int i = 0; i < row; i++) {
		for (int i2 = 0; i2 < clo; i2++) {
			cout << setw(3) << arr[i][i2] << " ";
		}
		cout << endl;
	}
}
void print_res(int arr2[3] , int length) {
	for (int i = 0; i < length; i++) 
		
			cout << "the sum of col"<<i+1<<" = " << arr2[i] <<endl;
		
		
	
}

int main() {
	srand((unsigned)time(NULL));
	int arr[3][3];
	int arr2[3];

	fill_array_with_random_numbers(arr, 3, 3);
	cout << "\nthe elements of matrix 3x3 are: \n";
	print_res(arr, 3, 3);

	cout << "\nthe sum of each col is: \n";
	fill_array2_with_sum(arr2, arr, 3, 3);
	print_res(arr2,3);
}