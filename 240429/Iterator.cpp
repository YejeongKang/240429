//vector<int> ::iterator iter;

// * iterator
// 다음 요소에 접근하기 위함.
// 겉보기에는 배열이지만 다른 메모리를 사용하는 배열의 순차 접근을 돕기 위함.
// 벡터를 resize 하면, 새로운 메모리에 원래 요소들을 복사해놓고 원본을 삭제.
// 아예 다른 주소값을 갖게 됨.

//int nums[10];
//int* p = nums;
//int* p = v; // X
// int* p = v.begin();

// 벡터 중복 삭제

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main() {

	vector<int> myVector = { 10, 20, 30, 20, 40, 10, 50 };

	cout << "[vector] " << endl;

	// 벡터 값 출력
	cout << endl << "{";
	for (int vec : myVector) {
		cout << vec;
		if (vec != myVector.back()) {
			cout << ", ";
		}
		else {
			break;
		}
	}
	cout << "};" << endl;

	sort(myVector.begin(), myVector.end());

	myVector.erase(unique(myVector.begin(), myVector.end()), myVector.end());

	cout << endl << "[vector 중복삭제] " << endl;

	// 벡터 값 출력
	cout << endl << "{";
	for (int vec : myVector) {
		cout << vec;
		if (vec != myVector.back()) {
			cout << ", ";
		}
		else {
			break;
		}
	}
	cout << "};" << endl;

}

