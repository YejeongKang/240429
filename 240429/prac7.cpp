#include <iostream>
#include <time.h>
#include <vector>

using namespace std;

#define REPEAT 100000000

int main() {
	time_t start, end;

	double result1, result2;

	vector<int> test_vec1(1);

	start = clock(); 	//���� �ð� ��ȯ

	for (int i = 0; i < REPEAT; i++) {

		 test_vec1.push_back(i + 1);

	}

	end = clock();

	result1 = (double)(end - start);
	
	cout << "test_vec1�� ���� �ð� : " << result1 << " millisecond" << endl;

	////////////////////////////////////////////////////////////////

	vector<int> test_vec2(1);

	test_vec2.reserve(REPEAT);

	start = clock(); 	//���� �ð� ��ȯ

	for (int i = 0; i < REPEAT; i++) {

		test_vec1.push_back(i + 1);

	}

	end = clock();

	result2 = (double)(end - start);

	cout << "test_vec2�� ���� �ð� : " << result2 << " millisecond" << endl;

	return 0;
}