/**
* 이름: 이나원
* 학번: 221124107
* 프로그램 제목: C++프로그램실습 과제물 1번 별찍기
* 최초 작성일: 2022. 03. 20.
**/

// 정수를 입력받아서 별을 출력하는 프로그램


#include <iostream>
using namespace std;

int main()
{

	int starNumber;
	int s = 0;
	
	cout << "정수를 입력하시오:";
	cin >> starNumber;
	//정수 입력받아서 starNumber에 저장함

	
	for (int i = 0; i <= starNumber; i++)				// for문 전체를 입력받은 수만큼 반복
	{

		for (int j = i; j <= starNumber-1; j++)		// 공백 반복해서 출력
		{
			cout << " ";
		}

		for (int k = 0; k < i; k++)		// '*' 반복해서 출력(두개씩 늘어나야 하는데 하나씩 늘어남)
		{
			cout << "*";
		}

		cout << "\n ";		// 반복 끝나고 줄바꿈
	}

	return 0;
}