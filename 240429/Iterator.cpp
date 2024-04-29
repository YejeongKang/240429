//vector<int> ::iterator iter;

// * iterator
// ���� ��ҿ� �����ϱ� ����.
// �Ѻ��⿡�� �迭������ �ٸ� �޸𸮸� ����ϴ� �迭�� ���� ������ ���� ����.
// ���͸� resize �ϸ�, ���ο� �޸𸮿� ���� ��ҵ��� �����س��� ������ ����.
// �ƿ� �ٸ� �ּҰ��� ���� ��.

//int nums[10];
//int* p = nums;
//int* p = v; // X
// int* p = v.begin();

// ���� �ߺ� ����

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main() {

	vector<int> myVector = { 10, 20, 30, 20, 40, 10, 50 };

	cout << "[vector] " << endl;

	// ���� �� ���
	
	//1
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

	//2
	for (int vec : myVector) {
		if (vec != myVector.back()) cout << vec << ", ";
		else cout << vec;
	}

	//3
	cout << "{";
	auto last = myVector.end();
	--last; // Point to the last element
	for (auto it = myVector.begin(); it != last; ++it) {
		cout << *it << ", ";
	}
	cout << *last << "};" << endl;

	sort(myVector.begin(), myVector.end());

	myVector.erase(unique(myVector.begin(), myVector.end()), myVector.end());

	cout << endl << "[vector �ߺ�����] " << endl;

	// ���� �� ���
	/*cout << endl << "{";
	for (int vec : myVector) {
		cout << vec;
		if (vec != myVector.back()) {
			cout << ", ";
		}
		else {
			break;
		}
	}
	cout << "};" << endl;*/

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

