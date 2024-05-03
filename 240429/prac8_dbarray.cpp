#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
	int row = 0 , column = 0 , input;

	cout << "��� ���� ���� �Է��ϼ��� : " << endl;
	
	// ��� ���� �� �Է� �ޱ�
	cin >> row >> column;

	// 2���� ���� �迭 ���� 
	int** matrix = new int* [row];

	for (int i = 0; i < row; i++) {

		matrix[i] = new int[column];

	}
	
	// �Է°��� �迭�� �߰�
	cout << endl << "��� ���Ҹ� �Է��ϼ��� : " << endl;

	for (int i = 0; i < row; i++) {
		cout << endl;

		for (int j = 0; j < column; j++) {
			cin >> input;
			matrix[i][j] = input;
		}
	}

	// *** �� ��� ���� ���� ������ 1���� �迭 ���� ***
	int *sum_row = new int[row];
	int *sum_column = new int[column];

	// �� ���� �� ���ϱ�
	cout << endl << "�� ���� �� :" << endl;

	for (int i = 0; i < row; i++) {
		
		sum_row[i] = 0;

		for (int j = 0; j < column; j++) {
			
			sum_row[i] += matrix[i][j];
		}
		cout << "�� " << i + 1 << ": " << sum_row[i] << endl;
	}

	// �� ���� �� ���ϱ�
	cout << endl << "�� ���� �� :" << endl;

	for (int j = 0; j < column; j++) {
	
		sum_column[j] = 0;
		for (int i = 0; i < row; i++) {
			
			sum_column[j] += matrix[i][j];
		}
		cout << "�� " << j + 1 << ": " << sum_column[j] << endl;
	}

	// �迭 ���� !!!
	for (int i = 0; i < row; i++) {
		delete[] matrix[i];
	}
	delete[] matrix;

	delete[] sum_row;
	delete[] sum_column;

}