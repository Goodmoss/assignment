/**
* �̸�: �̳���
* �й�: 221124107
* ���α׷� ����: C++���α׷��ǽ� ������ 1�� �����
* ���� �ۼ���: 2022. 03. 20.
**/

// ������ �Է¹޾Ƽ� ���� ����ϴ� ���α׷�


#include <iostream>
using namespace std;

int main()
{

	int starNumber;
	
	cout << "������ �Է��Ͻÿ�:";
	cin >> starNumber;
	// ���� �Է¹޾Ƽ� starNumber�� ������

	// ���� ���� �þ�� �κ�
	for (int i = 0; i < starNumber; i++)				
	{
		for (int j = i; j < starNumber; j++)	// ���� ����ϴ� �ݺ���. ���� ������ �پ��鼭 ���	
		{
			cout << " ";
		}

		for (int k = 0; k <= i*2; k++)			// * �ݺ� ����ϴ� �ݺ���. *�� �ΰ��� �þ�鼭 ���
		{
			cout << "*";
		}
		cout << "\n ";							// �ݺ��� ���� ������ �ٹٲ�
	}


	//���� ���� �پ��� �κ� 
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