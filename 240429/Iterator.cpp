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


#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main() {

	vector<int> myVector = { 10, 20, 30, 20, 40, 10, 50 };

	cout << " [vector] " << endl;

	// ���� �� ���
	cout << "{";
	for (int vec : myVector) {
		cout << vec;
		if (vec != *(myVector.begin() + myVector.size())) {
			cout << ", ";
		}
		else {
			break;
		}
	}
	cout << "};";

	unique(myVector.begin(), myVector.end());

	cout << " [vector �ߺ�����] " << endl << "��� : " << endl;

	// ���� �� ���
	cout << "{";
	for (int vec : myVector) {
		cout << vec;
		if (vec != *(myVector.end())) {
			cout << ", ";
		}
		else {
			break;
		}
	}
	cout << "};";

}

