#include "Hanoi.h"

using namespace std;
int InputFromUser()
{
	int n{};

	cout << "<하노이의 탑>" << endl;
	cout << "1. 한번에 하나의 원판만 옮길 수 있다." << endl;
	cout << "2. 큰 원판이 작은 원판 위에 있어서는 안된다." << endl;
	cout << "----------------------------------------------" << endl;
	cout << "원판의 갯수를 입력하세요 : ";
	cin >> n;

	return n;
}

void Move(char from, char to)
{
	cout << from << "에서" << to << "로 원반을 옮깁니다." << endl;
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