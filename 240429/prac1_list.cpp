#include <iostream>
#include <string>
#include <list>

using namespace std;

int isNum(list<int> list, int num); // 범용성이 낮다 => findNum(iter, num); 해주면 범용성이 높아짐.

int main() {

	// 1. 리스트 선언
	list<int> myList = { 5, 4, 3, 4, 2, 1, 1 };
	
	// 2. 4가 몇 개인지 출력
	cout << "리스트 내 4의 갯수는 : " << isNum(myList , 4) << "개" << endl;

	// 3. 리스트 정렬
	myList.sort();

	for (int value : myList) cout << value << " ";

	cout << endl;

	// 4. 중복제거 (sort 선행 필수)
	myList.unique();
	
	for (int value : myList) cout << value << " ";

	cout << endl;

	// 5. 리스트 병합 (+정렬) /+ splice(요소 이동)는 정렬하지 않음.
	list<int> newList = { 6, 7 };
	
	myList.merge(newList);

	for (int value : myList) cout << value << " ";

	cout << endl;

	// 6. 맨 앞에 원소 추가
	myList.push_front(0);

	for (int value : myList) cout << value << " ";

	cout << endl;

}

int isNum(list<int> list, int num) {
	int cnt = 0;
	
	for (int value : list) if (value == 4) cnt++;
	
	return cnt;
}