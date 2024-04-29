#include <iostream>
#include <vector>
#include <string>
#include <algorithm> // sort�� unique ���

using namespace std;

int main() {

	vector<int> myVector = { 10, 20, 30, 20, 40, 10, 50 };

	cout << "[vector]" << endl;

	// ���� �� ���

	for (int vec : myVector) {
		cout << vec << " ";
	}

	sort(myVector.begin(), myVector.end());

	myVector.erase(unique(myVector.begin(), myVector.end()), myVector.end());

	cout << endl << "[vector �ߺ�����]" << endl ;

	// ���� �� ���

	for (int vec1 : myVector) {
		cout << vec1 << " ";
	}

}