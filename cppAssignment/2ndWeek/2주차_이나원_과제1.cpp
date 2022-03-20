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
	
	cout << "정수를 입력하시오:";
	cin >> starNumber;
	// 정수 입력받아서 starNumber에 저장함

	// 별이 점점 늘어나는 부분
	for (int i = 0; i < starNumber; i++)				
	{
		for (int j = i; j < starNumber; j++)	// 공백 출력하는 반복문. 공백 개수가 줄어들면서 출력	
		{
			cout << " ";
		}

		for (int k = 0; k <= i*2; k++)			// * 반복 출력하는 반복문. *이 두개씩 늘어나면서 출력
		{
			cout << "*";
		}
		cout << "\n ";							// 반복이 끝날 때마다 줄바꿈
	}


	//별이 점점 줄어드는 부분 
	for (int i = starNumber-1; i > 0; i--)			
	{
		for (int j = i; j <= starNumber; j++)	
		{
			cout << " ";
		}

		for (int k = 0; k <= (i-1)*2; k++)
		{
			cout << "*";
		}

		cout << "\n ";	
	}


	return 0;
}