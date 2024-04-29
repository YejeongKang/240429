#include <iostream>
#include <string>
#include <vector>

using namespace std;

void vector_to_array(vector<int> vec, int** array, int m, int n);

int main() {
	int row = 0, column = 0, input;

	vector<int> in_vec; // �Է� �޴� ����� ���Ҹ� ������

	int** arr = new int* [row];

	for (int i = 0; i < row; i++) {

		arr[i] = new int[column];

	}

	cout << "��� ���� ���� �Է��ϼ��� : " << endl;

	// ��� ���� �� �Է� �ޱ�
	cin >> row >> column;

	// ��� ���Ҹ� ������ �� �ִ� ���� ����� ����
	in_vec.reserve(row * column);

	cout << "��� ���Ҹ� �Է��ϼ��� : " << endl;

	// �Է°��� ���Ϳ� �߰�
	for (int i = 0; i < row; i++) {
		cout << endl;
		for (int j = 0; j < column; j++) {
			cin >> input;
			in_vec.push_back(input);
		}
	}

	// ���Ϳ� ������ ���� �迭�� ��ȯ
	vector_to_array(in_vec, arr, row, column);

	// �� ��� ���� �� ���ϱ�
	int* sum_row = new int[row];
	int* sum_column = new int[column];

	for (int i = 0; i < row; i++) {
		cout << "�� ���� �� :" << endl;
		sum_row[i] = 0;
		for (int j = 0; j < column; j++) {

			sum_row[i] += arr[i][j];
		}
		cout << "�� " << i + 1 << ": " << sum_row[i] << endl;
	}

	for (int j = 0; j < column; j++) {
		cout << "�� ���� �� :" << endl;
		sum_column[j] = 0;
		for (int i = 0; i < row; i++) {

			sum_column[j] += arr[i][j];
		}
		cout << "�� " << j + 1 << ": " << sum_column[j] << endl;
	}

}

void vector_to_array(vector<int> vec, int** array, int m, int n) {
	// �迭�� 1���� x*y ���� ������ ���� ��, ���� ���

	for (int i = 0; i < m; i++) {

		cout << endl;

		for (int j = 0; j < n; j++) {

			array[i][j] = *(vec.begin() + i * n + j);

			//cout << array[i][j] << "\t";
		}
	}
}