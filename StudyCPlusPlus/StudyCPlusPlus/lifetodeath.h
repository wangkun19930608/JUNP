#pragma once
#ifndef LIFETODEATH_H
#define LIFETODEATH_H
#define LEN sizeof(struct Defect)        // ����ṹ���С
class lifetodeath
{
public:
	lifetodeath();
	struct Defect                            // ������ͽ�ṹ��
	{
		int number;                          // Ϊÿ�����Լ��ĺ�����
		struct Defect *next;                 // ָ�룬�������������γɻ���
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