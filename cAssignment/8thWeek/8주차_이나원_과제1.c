// 2차원 배열의 요소를 10씩 증가시키는 문제
//

/******
C프로젝트 221124107 이나원
(8주차_이나원_과제1)

print_image : 반복문을 통해 배열을 출력하는 함수를 작성합니다.
brighten_image : 포인터를 이용해 배열에 접근해 연산을 실행하는 함수를 작성합니다.
main 함수에서 print_image와 brighten_image를 실행합니다.

******/

#include <stdio.h>
#define SIZE 5
// 픽셀 값 출력 (2차원 배열)


// 픽셀 값 출력
void print_image(int image[SIZE][SIZE])
{
	int i, j;
	for (i = 0; i < 5; i++)		// 중첩 반복문 사용 -> 배열 요소 출력
	{
		for (j = 0; j < 5; j++)
		{
			printf("%d ", image[i][j]);
		}
		printf("\n");
	}
}

// 픽셀 밝기 10 증가, 포인터로 2차원 배열 접근
// image에 접근해서 값을 10씩 증가시킵니다.
void brighten_image(int image[SIZE][SIZE])
{
	int i, j;	// 반복문 변수
	int* p;		
	p = image;	
	// 포인터 변수 p 선언 후, image에 접근

	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			*p = *p + 10;
			p++;
			// 반복문과 연산자를 사용해 값을 10씩 증가시킴
		}
	}
}


int main()
{
	int i, j;
	int image[SIZE][SIZE] = {		// 밝기 배열
		{10, 20, 30, 40, 50},
		{60, 70, 80 ,90, 100},
		{110, 120, 130, 140, 150},
		{160, 170, 180, 190, 200},
		{210, 220, 230, 240, 250} };

	
	// 출력 1 : 원본
	printf("원본 픽셀 값 =========\n");
	print_image(image);		// 2차원 배열 출력 함수 실행

	// 출력 2 : 수정 후(brighten_image 함수 실행 후)
	printf("수정 후 픽셀 값 =========\n");
	brighten_image(image);	// 밝기 10씩 증가시키는 함수 실행
	print_image(image);		// 2차원 배열 출력 함수 실행

	return 0;
}





// image[i][j] += 10;
// *p =