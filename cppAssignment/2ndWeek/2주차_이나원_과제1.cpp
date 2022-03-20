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

    //별 증가하는 반복문
    for (int i = 0; i < starNumber; i++)
    {
        for (int j = starNumber - 1; j > i; j--)    // 공백이 하나씩 줄어들게 출력
        {
            cout << " ";
        }

        for (int j = 0; j < 2 * i + 1; j++)         // *이 두 개씩 늘어나게 출력
        {
            cout << "*";
        }
        cout << "\n";
    }


    //별 줄어드는 반복문
    for (int i = 1; i < starNumber; i++)
    {
        for (int j = 0; j < i; j++)                 // 공백이 하나씩 줄어들게 출력
        {
            cout << " ";
        }

        for (int j = 2 * starNumber - 1; j > 2 * i; j--)    // *이 두 개씩 늘어나게 출력
        {
            cout << "*";
        }
        cout << "\n";
    }

    return 0;

}