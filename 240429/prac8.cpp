#include <iostream>
#include <vector>
#include <string>
#include <algorithm> // sort와 unique 사용

using namespace std;

int main() {

	vector<int> myVector = { 10, 20, 30, 20, 40, 10, 50 };

	cout << "[vector]" << endl;

	// 벡터 값 출력

	for (int vec : myVector) {
		cout << vec << " ";
	}

	sort(myVector.begin(), myVector.end());

	myVector.erase(unique(myVector.begin(), myVector.end()), myVector.end());

	cout << endl << "[vector 중복삭제]" << endl ;

	// 벡터 값 출력

	for (int vec1 : myVector) {
		cout << vec1 << " ";
	}

}