#pragma once
#ifndef HANOI_H
#define HANOI_H
#include"stdio.h"
class hanoi
{
public:
	hanoi();
	~hanoi();
	void MoveHanoi(int n, char a, char b, char c);
	void Start();
	int num=1;
private:

};





#endif