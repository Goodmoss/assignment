// 피라미드의 높이를 구하는 문제
// 지팡이 그림자 길이:피라미드 그림자 길이 = 지팡이 높이:피라미드 높이

/*******
C프로젝트 221124107 이나원
(2주차_이나원_과제1)

비례식의 성질을 사용합니다. 
위 식은 다음과 같이 바꿀 수 있습니다.
	=>	피라미드 그림자 길이*지팡이 높이 = 지팡이 그림자 길이*피라미드 높이

양변에 '지팡이 그림자 길이'를 나누어줍니다. 그러고 난 후의 식은 다음과 같습니다.
	=> 피라미드 높이 = (피라미드 그림자 길이*지팡이 높이)/지팡이 그림자 길이

'피라미드 그림자 길이', '지팡이 높이', '지팡이 그림자 길이'를 입력받아서 위 식에 대입하면 
'피라미드의 높이'를 구할 수 있습니다.
*******/

#include <stdio.h>

int main(void)
{
	int stick, stickShadow;			// 지팡이, 지팡이 그림자 길이 변수
	int pyramidShadow;				// 피라미드 그림자 길이 변수
	float pyramid;					// 피라미드 높이 변수 (소수점 이하 출력을 위해 실수형으로 선언)

	printf("지팡이 그림자의 길이를 입력하시오: ");
	scanf_s("%d", &stickShadow);	//지팡이 그림자 입력받음 -> stickShadow에 저장
	printf("피라미드 그림자의 길이를 입력하시오: ");
	scanf_s("%d", &pyramidShadow);	//피라미드 그림자 입력받음 -> pyramidShadow에 저장
	printf("지팡이의 높이를 입력하시오: ");
	scanf_s("%d", &stick);	//지팡이 높이 입력받음 -> stick에 저장

	pyramid = pyramidShadow * stick / stickShadow;
	// 계산식 
	// 피라미드 높이 = (피라미드 그림자 길이 * 지팡이 높이) / 지팡이 그림자 길이
	
	printf("피라미드의 높이는 %.2f 입니다.", pyramid);
	//피라미드의 높이 출력
	//소수점 둘째 자리까지 출력

	return 0;
}