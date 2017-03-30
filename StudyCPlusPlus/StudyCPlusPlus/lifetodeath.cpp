#include"stdio.h"
#include<malloc.h>
#include"lifetodeath.h"

lifetodeath::lifetodeath()
{
	printf("life is creat!\n");
}

void lifetodeath::def(int n, int m)                    // ��������n�ͱ���Ϊmʱ�˳�
{
	if (m == 1)
	{
		printf("%d ", n);
		return;
	}
	int i = 2, count = 2;                 // i ��¼������count��¼����

	struct Defect *head, *p=0, *q=0;                // ���������ṹ��ָ��

	q = head = (struct Defect *)malloc(LEN);   // Ϊ��һ��������ṹ��
	head->number = 1;                         // �����һ���ṹ��ĺ���Ϊ1

	while (i <= n)                               // ��ѭ������n���˵Ľṹ�壬��Ϊÿ���˵ĺ��븳ֵ
	{
		p = (struct Defect *)malloc(LEN);     // ����
		p->number = i++;                      //��ֵ
		q->next = p;                          //����
		q = p;                                //��λ
	}

	i = n;                                    //��¼��ǰ����
	p->next = head;                           //�����˺͵�һ��������
	q = head;                                 //ָ����ʼλ�ã������趨Ϊһ����   ��Ҫ�Ļ������趨����λ��Ϊ��ʼλ��

	while (i>1)                                //��������1ִ��ѭ��
	{
		p = q->next;                     //pָ����һ����
		if (count%m == 0)                      //�������Ϊm�ı���
		{
			q->next = p->next;                //ɾ����ǰ�Ľṹ��
											  //	printf("%d dead\n",p->number);
			p->next = 0;
			i--;                              //������һ
		}
		else
			q = p;                            //�������������ƶ��ж���
		count++;                              //������1
		if (count>m)                           //����������ʱ����Ϊ1  ��ʵ����û������ж���Ϊ����Ŀ��Ƶ�123,123,123~~
			count = 1;
	}

	printf("%d ", q->number);                 //���ʣ�µ��Ǹ���


}


void lifetodeath::defSee(int n, int m)                    // ��������n�ͱ���Ϊmʱ�˳�
{
	if (m == 1)
	{
		printf("%d ", n);
		return;
	}
	int i = 2, count = 2;                 // i ��¼������count��¼����

	struct Defect *head, *p=0, *q=0;                // ���������ṹ��ָ��

	q = head = (struct Defect *)malloc(LEN);   // Ϊ��һ��������ṹ��
	head->number = 1;                         // �����һ���ṹ��ĺ���Ϊ1

	while (i <= n)                               // ��ѭ������n���˵Ľṹ�壬��Ϊÿ���˵ĺ��븳ֵ
	{
		p = (struct Defect *)malloc(LEN);     // ����
		p->number = i++;                      //��ֵ
		q->next = p;                          //����
		q = p;                                //��λ
	}

	i = n;                                    //��¼��ǰ����
	p->next = head;                           //�����˺͵�һ��������
	q = head;                                 //ָ����ʼλ�ã������趨Ϊһ����   ��Ҫ�Ļ������趨����λ��Ϊ��ʼλ��

	while (i>1)                                //��������1ִ��ѭ��
	{
		p = q->next;                     //pָ����һ����
		if (count%m == 0)                      //�������Ϊm�ı���
		{
			q->next = p->next;                //ɾ����ǰ�Ľṹ��
			printf("%d ", p->number);
			p->next = 0;
			i--;                              //������һ
		}
		else
			q = p;                            //�������������ƶ��ж���
		count++;                              //������1
		if (count>m)                           //����������ʱ����Ϊ1  ��ʵ����û������ж���Ϊ����Ŀ��Ƶ�123,123,123~~
			count = 1;
	}

	printf("%d ", q->number);                 //���ʣ�µ��Ǹ���


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
	//�����������ͱ����˳�����
	while (m++ <= n)
	{


		for (i = 1;i <= m;i++)
		{
			def(m, i);

		}
		printf("\n");
	}
}