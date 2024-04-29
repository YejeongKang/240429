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

	cout << endl << "[vector �ߺ�����] " << endl;

	// ���� �� ���
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

