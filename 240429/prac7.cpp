#include <iostream>
#include <time.h>
#include <vector>

using namespace std;

#define REPEAT 100000000

int main() {
	time_t start, end;

	double result;

	// 1) time

	start = time(null); // ���� �ð� ��ȯ

	vector<int> test_vec1(1);

	test_vec1.reserve(repeat);
	
	for (int i = 0; i < repeat; i++) {

		test_vec1.push_back(i + 1);

	}

	end = time(null);

	result = (double)(end - start);

	cout << "���� �ð� : " << result << " second" << endl;

	return 0;

	// 2) clock

	start = clock(); 	//���� �ð� ��ȯ
	

	vector<int> test_vec1(1);

	test_vec1.reserve(REPEAT);
	 
	for (int i = 0; i < REPEAT; i++) {

		 test_vec1.push_back(i + 1);

	}

	end = clock();

	result = (double)(end - start);

	/*second�� ����
	cout << "���� �ð� : " << ((result) / clocks_per_sec) << " second" << endl;
	*/
	
	// millisecond�� ����
	
	cout << "���� �ð� : " << result << " millisecond" << endl;

	return 0;
}