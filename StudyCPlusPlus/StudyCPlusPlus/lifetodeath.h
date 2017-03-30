#pragma once
#ifndef LIFETODEATH_H
#define LIFETODEATH_H
#define LEN sizeof(struct Defect)        // 计算结构体大小
class lifetodeath
{
public:
	lifetodeath();
	struct Defect                            // 定义叛徒结构体
	{
		int number;                          // 为每个人自己的号码牌
		struct Defect *next;                 // 指针，下面用它链接形成环体
	};

	void def(int n, int m);
	void defSee(int n, int m);
	void DeadLast();
	void DeadSerial();
	void LiveSerial();
	void DeadSerials();
	void LiveSerials();
};
#endif