#include <iostream>
#include <vector>
#include <string>
#include <algorithm> // sort와 unique 사용

using namespace std;

int main() {

	vector<int> myVector = { 10, 20, 30, 20, 40, 10, 50 };

	cout << "[vector]" << endl;

	// 초기 벡터 원소 출력
	for (int vec : myVector) cout << vec << " ";

	sort(myVector.begin(), myVector.end()); // 무조건 sort해줘야 함. unique가 연속되는 중복만 제거하기 때문.

	myVector.erase(unique(myVector.begin(), myVector.end()), myVector.end()); 
	// unique 함수 사용 후 중복 원소가 뒤로 감. 
	// 첫 중복 원소의 주소값을 리턴.  
	// ex) 5, 6 번째 원소가 중복인 원소라면 5번부터 마지막 원소까지 지워짐.

	cout << endl << "[vector 중복삭제]" << endl ;

	// 중복 원소 제거 후 출력

	for (int vec1 : myVector) cout << vec1 << " ";

}