#include"stdio.h"
#include"hanoi.h"

hanoi::hanoi()
{

}

hanoi::~hanoi()
{
}
void hanoi::Start()
{
	int t;
	printf("input the number of disk!\n");
	//scanf("%d", &hanoi::num);
	scanf("%d", &t);
	MoveHanoi(t, 'a', ' b', ' c');
}

void hanoi::MoveHanoi(int n, char a, char b, char c)
{
	if (n == 1)
		printf("No.%d Disk%d %c->%c\n",hanoi::num++, n, a, c);
	else
	{
		MoveHanoi(n - 1, a, c, b);
		printf("No.%d Disk%d %c->%c\n", hanoi::num++, n, a, c);
		MoveHanoi(n - 1, b, a, c);
	}
}