#include <iostream>
#include <time.h>
#include <vector>

using namespace std;

#define REPEAT 100000000

void PushHM(vector<int> vec);

int main() {
	time_t start, end;

	double result1, result2;

	vector<int> test_vec1(1);

	start = clock(); 	//현재 시간 반환

	PushHM(test_vec1);

	end = clock();

	result1 = (double)(end - start);
	
	cout << "test_vec1의 수행 시간 : " << result1 << " millisecond" << endl;

	////////////////////////////////////////////////////////////////

	vector<int> test_vec2(1);

	test_vec2.reserve(REPEAT);

	start = clock(); 	//현재 시간 반환

	PushHM(test_vec2);

	end = clock();

	result2 = (double)(end - start);

	cout << "test_vec2의 수행 시간 : " << result2 << " millisecond" << endl;

	return 0;
}

void PushHM(vector<int> vec) {
	
	for (int i = 0; i < REPEAT; i++) {

		vec.push_back(i + 1);

	}
}

