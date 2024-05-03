#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
	int row = 0 , column = 0 , input;

	cout << "행과 열의 수를 입력하세요 : " << endl;
	
	// 행과 열의 수 입력 받기
	cin >> row >> column;

	// 2차원 동적 배열 선언 
	int** matrix = new int* [row];

	for (int i = 0; i < row; i++) {

		matrix[i] = new int[column];

	}
	
	// 입력값을 배열에 추가
	cout << endl << "행렬 원소를 입력하세요 : " << endl;

	for (int i = 0; i < row; i++) {
		cout << endl;

		for (int j = 0; j < column; j++) {
			cin >> input;
			matrix[i][j] = input;
		}
	}

	// *** 각 행과 열의 합을 저장할 1차원 배열 선언 ***
	int *sum_row = new int[row];
	int *sum_column = new int[column];

	// 각 행의 합 구하기
	cout << endl << "각 행의 합 :" << endl;

	for (int i = 0; i < row; i++) {
		
		sum_row[i] = 0;

		for (int j = 0; j < column; j++) {
			
			sum_row[i] += matrix[i][j];
		}
		cout << "행 " << i + 1 << ": " << sum_row[i] << endl;
	}

	// 각 열의 합 구하기
	cout << endl << "각 열의 합 :" << endl;

	for (int j = 0; j < column; j++) {
	
		sum_column[j] = 0;
		for (int i = 0; i < row; i++) {
			
			sum_column[j] += matrix[i][j];
		}
		cout << "열 " << j + 1 << ": " << sum_column[j] << endl;
	}

	// 배열 해제 !!!
	for (int i = 0; i < row; i++) {
		delete[] matrix[i];
	}
	delete[] matrix;

	delete[] sum_row;
	delete[] sum_column;

}