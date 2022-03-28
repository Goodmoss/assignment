// 피보나치 수열 프로그램
// (1, 1)로 시작해서 앞의 두 항의 합이 뒤의 항이 되어있는 수열

/*******
C프로젝트 221124107 이나원
(3주차_이나원_과제2)

몇 항까지 출력할지를 입력받습니다.
입력받은 항만큼 피보나치 수열을 출력합니다.
피보나치 수열 계산 방법: c = a + b, a = b, b = c를 반복합니다.

		!! 작동 과정 !!
	출력할 항 개수 입력받기
	-> c = a + b, a = b, b = c를 구현한 반복문 작동
	-> 입력받았던 수만큼 반복 후 프로그램 종료
	
*******/


#include <stdio.h>

int main()
{
	int userNum, i;	// 출력할 항이 저장될 변수, 반복문 변수
	int a = 0;			// 피보나치 수열을 계산할 변수들
	int	b = 1;
	int	c;

	// c = a + b, a = b, b = c를 반복한다.
	printf("몇번째 항까지 구할까요? ");
	scanf_s("%d", &userNum);


	for (i = 0; i < userNum; i++)	//계산식을 입력한 수만큼 반복문 작동
	{
		c = a + b;
		a = b;
		b = c;
		printf("%d ", a);
	}

	return 0;
}