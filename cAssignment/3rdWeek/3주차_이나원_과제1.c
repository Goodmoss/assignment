// 나만의 계산기 설계하기
// 연산 메뉴를 화면에 출력하고, 사용자의 입력에 따라 연산을 해서 출력하는 프로그램
// ASMD: 가감승제,	Q: 종료,		그 외: 안내 문구 출력


/*******
C프로젝트 221124107 이나원
(3주차_이나원_과제1)

while문을 사용하여 계산기를 반복해줍니다.
Q를 입력하면 break를 이용해 반복문을 빠져나오게끔 설계합니다.

	  !!작동 과정!!
메뉴 설명 -> 연산 입력받기 
	-> 첫번째 if문 작동(Q가 입력되면 프로그램 종료)
	-> 계산할 숫자 입력받기
	-> 두번째 if문 작동 -> ASMD 입력 시 계산, 그 외 안내문 출력
	-> 연산 입력받기 부분으로 돌아가 반복
*******/

#include <stdio.h>


int main()
{
	char alphabet;		// 연산을 저장할 변수
	int x, y;			// 계산할 수를 저장할 번수

	//메뉴 설명 출력
	printf("************\n");
	printf("A----Add\n");
	printf("S----Subsract\n");
	printf("M----Multiply\n");
	printf("D----Divide\n");
	printf("Q----Quit\n");
	printf("************\n");

	while (1)
	{

		printf("연산을 입력하시오: ");	// 연산 입력받기
		scanf_s("%c", &alphabet);

		if (alphabet == 'Q')			
			break;
		// Q 입력 시 break를 통해 while문을 빠져나가 프로그램 종료

		printf("두 수를 공백으로 분리하여 입력하시오: ");
		scanf_s("%d %d", &x, &y);
		// 계산할 수를 입력받음

		if (alphabet == 'A')
			printf("%d\n", x + y);
		else if (alphabet == 'S')
			printf("%d\n", x - y);
		else if (alphabet == 'M')
			printf("%d\n", x * y);
		else if (alphabet == 'D')
			printf("%d\n", x / y);
		// ASMD 중 하나를 입력받으면 덧셈, 뺄셈, 곱셈, 나눗셈을 하고 while문 첫 부분으로 돌아감
		else
			printf("지원되지 않는 연산자입니다.\n");
		// 그 외를 입력받으면 안내문구를 출력하고 while문 첫 부분으로 돌아감
	}

	return 0;
}