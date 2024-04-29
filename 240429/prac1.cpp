#include <iostream>
#include <string>
#include <list>

using namespace std;

int isFour(list<int>);

int main() {

	// 1. 리스트 선언
	list<int> myList = { 5, 4, 3, 4, 2, 1, 1 };
	
	// 2. 4가 몇 개인지 출력
	cout << "리스트 내 4의 갯수는 : " << isFour(myList) << "개" << endl;

	// 3. 
	myList.sort();

	for (int value : myList) cout << value << " ";

	cout << endl;

	// 4.
	myList.unique();
	
	for (int value : myList) cout << value << " ";

	cout << endl;

	// 5.
	list<int> newList = { 6, 7 };
	
	myList.merge(newList);

	for (int value : myList) cout << value << " ";

	cout << endl;

	// 6.
	myList.push_front(0);

	for (int value : myList) cout << value << " ";

	cout << endl;

}

int isFour(list<int> list) {
	int cnt = 0;
	
	for (int value : list) if (value == 4) cnt++;
	
	return cnt;
}