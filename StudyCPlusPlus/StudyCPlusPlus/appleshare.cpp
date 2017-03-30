#include"stdio.h"
#include"appleshare.h"

appleshare::appleshare()
{
	printf("apple creat!\n");
}

void appleshare::GetTotal(double s, double geichu, double huode, int i)
{
	//x6=   420/2/3=630 210->x1   420-210=210=x1*7/8  x1=240   
	double t;
	// return t= (s-s/(1-be)*be)/(1-af);
	//  return t= (s-s/(be-1.0))/(af-1.0)*af;//3,8
	//   420/3/4=560  140->x6   630-140=490=x6     //be geichu   af   huode 

	if (geichu == 8)
		t = (s - s / (huode - 1.0)) / (geichu - 1.0)*geichu;//3,8
	else if (geichu == 7)
		t = (s + s / (geichu - 1.0)) - ((s - s / (huode - 1.0)) / (geichu - 1.0)*geichu) / (huode - 1.0);// 7,8
	else
		t = (s + s / (geichu - 1.0)) - s / (huode - 1.0);// 3,4

	printf("x[%d]=%f\n", i, t);

}

void appleshare::GetNumber()
{
	//int i ;
	float s = 420;
	GetTotal(s, 8, 3, 1);
	GetTotal(s, 7, 8, 2);
	GetTotal(s, 6, 7, 3);
	GetTotal(s, 5, 6, 4);
	GetTotal(s, 4, 5, 5);
	GetTotal(s, 3, 4, 6);
}