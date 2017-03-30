#include"stdio.h"
#include<malloc.h>
#include"lifetodeath.h"

lifetodeath::lifetodeath()
{
	printf("life is creat!\n");
}

void lifetodeath::def(int n, int m)                    // 传入人数n和报数为m时退出
{
	if (m == 1)
	{
		printf("%d ", n);
		return;
	}
	int i = 2, count = 2;                 // i 记录人数，count记录报数

	struct Defect *head, *p=0, *q=0;                // 设置三个结构体指针

	q = head = (struct Defect *)malloc(LEN);   // 为第一个人申请结构体
	head->number = 1;                         // 定义第一个结构体的号码为1

	while (i <= n)                               // 用循环申请n个人的结构体，并为每个人的号码赋值
	{
		p = (struct Defect *)malloc(LEN);     // 申请
		p->number = i++;                      //赋值
		q->next = p;                          //链接
		q = p;                                //定位
	}

	i = n;                                    //记录当前人数
	p->next = head;                           //最后的人和第一个人链接
	q = head;                                 //指定开始位置，由于设定为一个换   需要的话可以设定任意位置为开始位置

	while (i>1)                                //人数大于1执行循环
	{
		p = q->next;                     //p指向下一个人
		if (count%m == 0)                      //如果报数为m的倍数
		{
			q->next = p->next;                //删除当前的结构体
											  //	printf("%d dead\n",p->number);
			p->next = 0;
			i--;                              //人数减一
		}
		else
			q = p;                            //不满足条件，移动判定人
		count++;                              //报数加1
		if (count>m)                           //报数大于三时，换为1  其实可以没有这个判定，为了题目设计的123,123,123~~
			count = 1;
	}

	printf("%d ", q->number);                 //输出剩下的那个人


}


void lifetodeath::defSee(int n, int m)                    // 传入人数n和报数为m时退出
{
	if (m == 1)
	{
		printf("%d ", n);
		return;
	}
	int i = 2, count = 2;                 // i 记录人数，count记录报数

	struct Defect *head, *p=0, *q=0;                // 设置三个结构体指针

	q = head = (struct Defect *)malloc(LEN);   // 为第一个人申请结构体
	head->number = 1;                         // 定义第一个结构体的号码为1

	while (i <= n)                               // 用循环申请n个人的结构体，并为每个人的号码赋值
	{
		p = (struct Defect *)malloc(LEN);     // 申请
		p->number = i++;                      //赋值
		q->next = p;                          //链接
		q = p;                                //定位
	}

	i = n;                                    //记录当前人数
	p->next = head;                           //最后的人和第一个人链接
	q = head;                                 //指定开始位置，由于设定为一个换   需要的话可以设定任意位置为开始位置

	while (i>1)                                //人数大于1执行循环
	{
		p = q->next;                     //p指向下一个人
		if (count%m == 0)                      //如果报数为m的倍数
		{
			q->next = p->next;                //删除当前的结构体
			printf("%d ", p->number);
			p->next = 0;
			i--;                              //人数减一
		}
		else
			q = p;                            //不满足条件，移动判定人
		count++;                              //报数加1
		if (count>m)                           //报数大于三时，换为1  其实可以没有这个判定，为了题目设计的123,123,123~~
			count = 1;
	}

	printf("%d ", q->number);                 //输出剩下的那个人


}

void lifetodeath::DeadLast()
{
	int m, n;
	printf("input the number of people n:\n");
	scanf("%d", &n);
	printf("input the number to count m:\n");
	scanf("%d", &m);
	def(n, m);
	printf(" is alive!\n");

}

void lifetodeath::DeadSerial()
{
	int m, n;
	printf("input the number of people n:\n");
	scanf("%d", &n);
	printf("input the number to count m:\n");
	scanf("%d", &m);
	defSee(n, m);
	printf("\n");

}

void lifetodeath::LiveSerial()
{
	int m, n;
	printf("input the number of people n:\n");
	scanf("%d", &n);
	printf("input the number to count m:\n");
	scanf("%d", &m);
	defSee(n, m);
	printf(" is alive!\n");

}

void lifetodeath::DeadSerials()
{
	int m, n;
	printf("input the number of people n:\n");
	scanf("%d", &n);
	printf("input the number to count m:\n");
	scanf("%d", &m);
	defSee(n, m);
	printf(" is alive!\n");

}

void lifetodeath::LiveSerials()
{
	int n, m, i;
	printf("input the number of people n:\n");
	scanf("%d", &n);
	m = 1;
	//设置人数，和报数退出条件
	while (m++ <= n)
	{


		for (i = 1;i <= m;i++)
		{
			def(m, i);

		}
		printf("\n");
	}
}