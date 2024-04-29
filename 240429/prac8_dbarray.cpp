#include <iostream>
#include <string>
#include <vector>

using namespace std;

void vector_to_array(vector<int> vec, int** array, int m, int n);

int main() {
	int row = 0 , column = 0 , input;

	cout << "��� ���� ���� �Է��ϼ��� : " << endl;
	
	// ��� ���� �� �Է� �ޱ�
	cin >> row >> column;

	// 2���� ���� �迭 ����
	int** arr = new int* [row];

	for (int i = 0; i < row; i++) {

		arr[i] = new int[column];

	}

	cout << endl << "��� ���Ҹ� �Է��ϼ��� : " << endl;
	
	// �Է°��� �迭�� �߰�
	for (int i = 0; i < row; i++) {
		cout << endl;
		for (int j = 0; j < column; j++) {
			cin >> input;
			arr[i][j] = input;
		}
	}

	// �� ��� ���� �� ���ϱ�
	int *sum_row = new int[row];
	int *sum_column = new int[column];
	
	cout << endl << "�� ���� �� :" << endl;

	for (int i = 0; i < row; i++) {
		
		sum_row[i] = 0;

		for (int j = 0; j < column; j++) {
			
			sum_row[i] += arr[i][j];
		}
		cout << "�� " << i + 1 << ": " << sum_row[i] << endl;
	}

	cout << endl << "�� ���� �� :" << endl;

	for (int j = 0; j < column; j++) {
	
		sum_column[j] = 0;
		for (int i = 0; i < row; i++) {
			
			sum_column[j] += arr[i][j];
		}
		cout << "�� " << j + 1 << ": " << sum_column[j] << endl;
	}
	
}
