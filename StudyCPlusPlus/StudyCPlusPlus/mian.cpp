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
		printf("请输入想要的功能：\n");
		printf("1最后死亡：\n");
		printf("2死亡次序：\n");
		printf("3按照报数为1到n的显示活着的人:\n");
		printf("4按照报数为1到n的显示死亡次序:\n");
		printf("5显示活着的人的编号的阶梯:\n");
		printf("6求轮换分苹果:\n");
		printf("7求和尚搬盘子:\n");
		printf("8皇后问题:\n");
		printf("0退出:\n");
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
用VS2013打开出现错误的代码文件
在工程文件名处右击鼠标打开快捷菜单，找到“属性”选项，进入项目属性页面
项目属性页面如下图所示
在属性页面中找到“C/C++"——”预处理器“，按下图操作单击箭头指向处的按钮
在下面的编辑窗口中添加一句命令：_CRT_SECURE_NO_WARNINGS
添加完成后应用并退出
再次编译并运行即可正常运行。

*/

