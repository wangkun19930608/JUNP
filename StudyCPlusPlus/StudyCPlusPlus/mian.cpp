#include <stdio.h>
#include<stdlib.h>
#include<malloc.h>
#include"lifetodeath.h"
#include"appleshare.h"
#include"hanoi.h"
#include"huanghou.h"


void main()
{


	int  choose;
	system("color 2f");
	lifetodeath ani;
	appleshare app;
	hanoi han;
	huanghou huanghou;
	while (1)
	{
		printf("��������Ҫ�Ĺ��ܣ�\n");
		printf("1���������\n");
		printf("2��������\n");
		printf("3���ձ���Ϊ1��n����ʾ���ŵ���:\n");
		printf("4���ձ���Ϊ1��n����ʾ��������:\n");
		printf("5��ʾ���ŵ��˵ı�ŵĽ���:\n");
		printf("6���ֻ���ƻ��:\n");
		printf("7����а�����:\n");
		printf("8�ʺ�����:\n");
		printf("0�˳�:\n");
		scanf("%d", &choose);
		switch (choose)
		{
		case 1:
			ani.DeadLast();
			break;
		case 2:
			ani.DeadSerial();
			break;
		case 3:
			ani.LiveSerial();
			break;
		case 4:
			ani.DeadSerials();
			break;
		case 5:
			ani.LiveSerials();
			break;
		case 6:
			app.GetNumber();
			break;
		case 7:
			han.Start();
			break;
		case 8:
				huanghou.place(1,4);
				break;
		case 0:
			return;
			break;
		default:
			printf("input wrong!\n");
			break;
		}
		system("pause");
		system("cls");

	}
	return;
}





/*
��VS2013�򿪳��ִ���Ĵ����ļ�
�ڹ����ļ������һ����򿪿�ݲ˵����ҵ������ԡ�ѡ�������Ŀ����ҳ��
��Ŀ����ҳ������ͼ��ʾ
������ҳ�����ҵ���C/C++"������Ԥ��������������ͼ����������ͷָ�򴦵İ�ť
������ı༭���������һ�����_CRT_SECURE_NO_WARNINGS
�����ɺ�Ӧ�ò��˳�
�ٴα��벢���м����������С�

*/

