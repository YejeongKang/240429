#include <iostream>
#include <string>
#include <list>

using namespace std;

int isFour(list<int>); // ���뼺�� ���� => findNum(iter, num); ���ָ� ���뼺�� ������.

int main() {

	// 1. ����Ʈ ����
	list<int> myList = { 5, 4, 3, 4, 2, 1, 1 };
	
	// 2. 4�� �� ������ ���
	cout << "����Ʈ �� 4�� ������ : " << isFour(myList) << "��" << endl;

	// 3. ����Ʈ ����
	myList.sort();

	for (int value : myList) cout << value << " ";

	cout << endl;

	// 4. �ߺ����� (sort ���� �ʼ�)
	myList.unique();
	
	for (int value : myList) cout << value << " ";

	cout << endl;

	// 5. ����Ʈ ���� (+����) /+ splice(��� �̵�)�� �������� ����.
	list<int> newList = { 6, 7 };
	
	myList.merge(newList);

	for (int value : myList) cout << value << " ";

	cout << endl;

	// 6. �� �տ� ���� �߰�
	myList.push_front(0);

	for (int value : myList) cout << value << " ";

	cout << endl;

}

int isFour(list<int> list) {
	int cnt = 0;
	
	for (int value : list) if (value == 4) cnt++;
	
	return cnt;
}