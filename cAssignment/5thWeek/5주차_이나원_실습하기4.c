// 3���� ������ �迭�� �����ϰ� ������� ����ϴ� ����
// 

/*******
C������Ʈ 221124107 �̳���
(5����_�̳���_�ǽ��ϱ�4)

�ݺ����� �̿��� �հ�, ���, ����� �迭�� �ְ�
printf���� ���� ����մϴ�.

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

	for (i = 0; i < 3; i++)		// �հ� ���ؼ� score �迭�� �ֱ�
	{
		scoreSum = sum(score[i][0], score[i][1], score[i][2]);
		score[i][3] = scoreSum;
	}


	for (i = 0; i < 3; i++)		// ��� ���ؼ� av �迭�� �ֱ�
	{
		scoreAver = score[i][3];
		av[i] = scoreAver / 3 ;

	}

	for (i = 0; i < 3; i++)		// ��� ���ؼ� grade �迭�� �ֱ�
	{
		scoreGrade = av[i];

		if (scoreGrade >= 90)		// if���� ����Ͽ� ���� ����� �����ݴϴ�.
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
			printf("��	");
		else if (i==1)
			printf("����	");
		else 
			printf("��	");

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

