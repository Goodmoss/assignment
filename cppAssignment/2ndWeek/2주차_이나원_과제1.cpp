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
	int s = 0;
	
	cout << "������ �Է��Ͻÿ�:";
	cin >> starNumber;
	//���� �Է¹޾Ƽ� starNumber�� ������

	
	for (int i = 0; i <= starNumber; i++)				// for�� ��ü�� �Է¹��� ����ŭ �ݺ�
	{

		for (int j = i; j <= starNumber-1; j++)		// ���� �ݺ��ؼ� ���
		{
			cout << " ";
		}

		for (int k = 0; k < i; k++)		// '*' �ݺ��ؼ� ���(�ΰ��� �þ�� �ϴµ� �ϳ��� �þ)
		{
			cout << "*";
		}

		cout << "\n ";		// �ݺ� ������ �ٹٲ�
	}

	return 0;
}