#include"stdio.h"
#include"huanghou.h"

const int N = 20;
int q[N];
int cont = 0;


int huanghou::abs(int i)
{
	if (i < 0)
		return -i;
	else
		return i;
}

void huanghou::print(int n)//输出一个解
{
	int i;
	cont++;
	printf("  第%d个解：", cont);
	for (i = 1;i <= n;i++)
	{
		printf("(%d,%d) ", i, q[i]);
	}
	printf("\n");

}

int huanghou::find(int j, int k)
{
	int i;
	for (i = 1;i < k;i++)
		if ((q[i] == j) || (abs(q[i] - j) == abs(i - k)))
			return 0;
	return 1;
}


void huanghou::place(int k, int n)
{
	if (k > n)
		print(n);
	else
		for (int j = 1;j <= n;j++)
			if (find(j, k))
			{
				q[k] = j;
				place(k + 1, n);
			}
}