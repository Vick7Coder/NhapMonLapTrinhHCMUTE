#include<stdio.h>
void InPut(int &y);
int CheckLeapYear(int y);
void OutPut(int y);
int main()
{
	int year;
	InPut(year);
	CheckLeapYear(year);
	OutPut(year);
	return 0;
}
void InPut(int &y)
{
	printf("vui long nhap nam: ");
	scanf("%d",&y);
}
int CheckLeapYear(int y)
{
	if((y%4==0&&y%100!=0)||(y%400==0))
	   return 1;
	return 0;
}
void OutPut(int y)
{
	if(CheckLeapYear(y)==1)
	{
		printf("%d la nam nhuan",y);
	}
	else
	{
		printf("%d khong phai nam nhuan",y);
	}
}

