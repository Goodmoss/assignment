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

    //�� �����ϴ� �ݺ���
    for (int i = 0; i < starNumber; i++)
    {
        for (int j = starNumber - 1; j > i; j--)    // ������ �ϳ��� �پ��� ���
        {
            cout << " ";
        }

        for (int j = 0; j < 2 * i + 1; j++)         // *�� �� ���� �þ�� ���
        {
            cout << "*";
        }
        cout << "\n";
    }


    //�� �پ��� �ݺ���
    for (int i = 1; i < starNumber; i++)
    {
        for (int j = 0; j < i; j++)                 // ������ �ϳ��� �پ��� ���
        {
            cout << " ";
        }

        for (int j = 2 * starNumber - 1; j > 2 * i; j--)    // *�� �� ���� �þ�� ���
        {
            cout << "*";
        }
        cout << "\n";
    }

    return 0;

}