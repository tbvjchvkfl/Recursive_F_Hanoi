#include "Hanoi.h"

int main()
{
	int n = InputFromUser();

	Hanoi(n, 'A', 'B', 'C');

	return 0;
}