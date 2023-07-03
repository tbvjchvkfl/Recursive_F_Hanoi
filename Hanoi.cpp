#include "Hanoi.h"

using namespace std;
int InputFromUser()
{
	int n{};

	cout << "<�ϳ����� ž>" << endl;
	cout << "1. �ѹ��� �ϳ��� ���Ǹ� �ű� �� �ִ�." << endl;
	cout << "2. ū ������ ���� ���� ���� �־�� �ȵȴ�." << endl;
	cout << "----------------------------------------------" << endl;
	cout << "������ ������ �Է��ϼ��� : ";
	cin >> n;

	return n;
}

void Move(char from, char to)
{
	cout << from << "����" << to << "�� ������ �ű�ϴ�." << endl;
}

void Hanoi(int n, char from, char temp, char to)
{
	if (n == 1)
	{
		Move(from, to);
	}
	else
	{
		Hanoi(n - 1, from, to, temp);
		Move(from, to);
		Hanoi(n - 1, temp, from, to);
	}
}