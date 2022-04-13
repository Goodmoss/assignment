// 3명의 점수를 배열로 저장하고 결과값을 출력하는 문제
// 

/*******
C프로젝트 221124107 이나원
(5주차_이나원_실습하기4)

반복문을 이용해 합계, 평균, 등급을 배열에 넣고
printf문을 통해 출력합니다.

*******/

#include <stdio.h>


 int sum(int score01, int score02, int score03);

int main()
{
	int i;	
	int scoreSum = 0;
	float scoreAver = 0;
	float scoreGrade = 0;
	char scoreGradeChar;

	int score[3][4] = { { 90,85,75 }, { 65,75,88 }, { 100,88,95 }};
	float av[2] = { 0, };
	char grade[2] = { 0, };
	
	// ----------

	for (i = 0; i < 3; i++)		// 합계 구해서 score 배열에 넣기
	{
		scoreSum = sum(score[i][0], score[i][1], score[i][2]);
		score[i][3] = scoreSum;
	}


	for (i = 0; i < 3; i++)		// 평균 구해서 av 배열에 넣기
	{
		scoreAver = score[i][3];
		av[i] = scoreAver / 3 ;

	}

	for (i = 0; i < 3; i++)		// 등급 구해서 grade 배열에 넣기
	{
		scoreGrade = av[i];

		if (scoreGrade >= 90)		// if문을 사용하여 성적 등급을 나눠줍니다.
			scoreGradeChar = 'A';
		else if (scoreGrade >= 80)
			scoreGradeChar = 'B';
		else
			scoreGradeChar = 'C';

		grade[i] = scoreGradeChar;

	}

	// ----------

	
	for (i = 0; i < 3; i++)
	{
		if (i == 0)
			printf("진	");
		else if (i==1)
			printf("정국	");
		else 
			printf("뷔	");

		printf("%d %d %d %d ", score[i][0], score[i][1], score[i][2], score[i][3]);
		printf("%0.2f ", av[i]);
		printf("%c\n", grade[i]);
		printf("\n");
	}


	return 0;
}


int sum(int score01, int score02, int score03)
{
	int personalSum = score01 + score02 + score03;
	return personalSum;
}

