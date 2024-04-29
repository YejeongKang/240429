#include <iostream>
#include <string>
#include <vector>

using namespace std;

void vector_to_array(vector<int> vec, int** array, int m, int n);

int main() {
	int row = 0, column = 0, input;

	vector<int> in_vec; // 입력 받는 행렬의 원소를 저장할

	int** arr = new int* [row];

	for (int i = 0; i < row; i++) {

		arr[i] = new int[column];

	}

	cout << "행과 열의 수를 입력하세요 : " << endl;

	// 행과 열의 수 입력 받기
	cin >> row >> column;

	// 행렬 원소를 저장할 수 있는 벡터 사이즈를 예약
	in_vec.reserve(row * column);

	cout << "행렬 원소를 입력하세요 : " << endl;

	// 입력값을 벡터에 추가
	for (int i = 0; i < row; i++) {
		cout << endl;
		for (int j = 0; j < column; j++) {
			cin >> input;
			in_vec.push_back(input);
		}
	}

	// 벡터에 저장한 값을 배열로 변환
	vector_to_array(in_vec, arr, row, column);

	// 각 행과 열의 합 구하기
	int* sum_row = new int[row];
	int* sum_column = new int[column];

	for (int i = 0; i < row; i++) {
		cout << "각 행의 합 :" << endl;
		sum_row[i] = 0;
		for (int j = 0; j < column; j++) {

			sum_row[i] += arr[i][j];
		}
		cout << "행 " << i + 1 << ": " << sum_row[i] << endl;
	}

	for (int j = 0; j < column; j++) {
		cout << "각 열의 합 :" << endl;
		sum_column[j] = 0;
		for (int i = 0; i < row; i++) {

			sum_column[j] += arr[i][j];
		}
		cout << "열 " << j + 1 << ": " << sum_column[j] << endl;
	}

}

void vector_to_array(vector<int> vec, int** array, int m, int n) {
	// 배열에 1부터 x*y 까지 값으로 저장 후, 값을 출력

	for (int i = 0; i < m; i++) {

		cout << endl;

		for (int j = 0; j < n; j++) {

			array[i][j] = *(vec.begin() + i * n + j);

			//cout << array[i][j] << "\t";
		}
	}
}