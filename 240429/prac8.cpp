#include <iostream>
#include <vector>
#include <string>
#include <algorithm> // sort�� unique ���

using namespace std;

int main() {

	vector<int> myVector = { 10, 20, 30, 20, 40, 10, 50 };

	cout << "[vector]" << endl;

	// �ʱ� ���� ���� ���
	for (int vec : myVector) cout << vec << " ";

	sort(myVector.begin(), myVector.end()); // ������ sort����� ��. unique�� ���ӵǴ� �ߺ��� �����ϱ� ����.

	myVector.erase(unique(myVector.begin(), myVector.end()), myVector.end()); 
	// unique �Լ� ��� �� �ߺ� ���Ұ� �ڷ� ��. 
	// ù �ߺ� ������ �ּҰ��� ����.  
	// ex) 5, 6 ��° ���Ұ� �ߺ��� ���Ҷ�� 5������ ������ ���ұ��� ������.

	cout << endl << "[vector �ߺ�����]" << endl ;

	// �ߺ� ���� ���� �� ���

	for (int vec1 : myVector) cout << vec1 << " ";

}