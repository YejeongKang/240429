#include <iostream>
#include <string>
#include <vector>

using namespace std;

void vector_to_array(vector<int> vec, int** array, int m, int n);

int main() {
	int row = 0 , column = 0 , input;

	cout << "행과 열의 수를 입력하세요 : " << endl;
	
	// 행과 열의 수 입력 받기
	cin >> row >> column;

	// 2차원 동적 배열 생성
	int** arr = new int* [row];

	for (int i = 0; i < row; i++) {

		arr[i] = new int[column];

	}

	cout << endl << "행렬 원소를 입력하세요 : " << endl;
	
	// 입력값을 배열에 추가
	for (int i = 0; i < row; i++) {
		cout << endl;
		for (int j = 0; j < column; j++) {
			cin >> input;
			arr[i][j] = input;
		}
	}

	// 각 행과 열의 합 구하기
	int *sum_row = new int[row];
	int *sum_column = new int[column];
	
	cout << endl << "각 행의 합 :" << endl;

	for (int i = 0; i < row; i++) {
		
		sum_row[i] = 0;

		for (int j = 0; j < column; j++) {
			
			sum_row[i] += arr[i][j];
		}
		cout << "행 " << i + 1 << ": " << sum_row[i] << endl;
	}

	cout << endl << "각 열의 합 :" << endl;

	for (int j = 0; j < column; j++) {
	
		sum_column[j] = 0;
		for (int i = 0; i < row; i++) {
			
			sum_column[j] += arr[i][j];
		}
		cout << "열 " << j + 1 << ": " << sum_column[j] << endl;
	}
	
}
