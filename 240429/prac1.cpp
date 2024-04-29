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

	for (list<int>::iterator it = myList.begin(); it != myList.end(); it++) {
		
		cout << *it << " ";

	}

	// 4.
	myList.unique();
	
	for (list<int>::iterator it = myList.begin(); it != myList.end(); it++) {

		cout << *it << " ";

	}

	// 5.
	list<int> newList = { 6, 7 };
	
	myList.merge(newList);

	for (list<int>::iterator it = myList.begin(); it != myList.end(); it++) {

		cout << *it << " ";

	}

	// 6.
	myList.push_front(0);

	for (list<int>::iterator it = myList.begin(); it != myList.end(); it++) {

		cout << *it << " ";

	}

}

int isFour(list<int> list) {
	int cnt = 0;
	for (int value : list) {
		if (value == 4) {
			cnt++;
		}
	}
	return cnt;
}