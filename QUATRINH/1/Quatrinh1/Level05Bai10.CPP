#include<stdio.h>
int CheckTogTic(int n);
void OutPut(int n);
void OutScreen();
int main()
{
	OutScreen();
	return 0;
	
}
int CheckTogTic(int n)
{
	int m = n/10;
	int r = n%10;
	if((m*r)==2*(m+r))
	   return 1;
	return 0;
}
void OutPut(int n)
{
	 printf("%d ",n);
}
void OutScreen()
{
	for(int i=10;i<100;i++)
	{
		if(CheckTogTic(i)==1)
		   OutPut(i);
	}
}
