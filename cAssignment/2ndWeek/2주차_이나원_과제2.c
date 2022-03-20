// 태양빛을 이용한 지구 반지름 구하기 문제
// 2πr : 360° = 900 : 7.2°
// 2πr : 360° = 거리 : 각도

/*******
C프로젝트 221124107 이나원
(2주차_이나원_과제2)

피라미드 문제와 마찬가지로 비례식의 성질을 사용합니다.
	=> 360*거리 = 2πr*각도
	=> 2πr = 360*거리/각도
	=> r = 360*거리/각도/2π

거리, 각도를 입력받아서 위 식에 대입하면 r(지구의 반지름)을 알 수 있습니다.
*******/

#include <stdio.h>

int main(void)
{
	float distance;		//거리 변수
	float degree;		//각도 변수
	float earthRadius;	//지구의 반지름 변수
	float pi = 3.14;

	printf("거리를 입력하시오(km):");
	scanf_s("%f", &distance);	//거리 입력받음 -> distance에 저장
	printf("각도를 입력하시오:");
	scanf_s("%f", &degree);		//각도 입력받음 -> degree에 저장

	earthRadius = 360*distance/degree/2/pi;
	// 계산식 
	// r = 360*거리/각도/2π

	printf("지구의 반지름은 %.3f km", earthRadius);
	//지구의 반지름 출력
	//소수점 셋째 자리까지 출력

	return 0;
}