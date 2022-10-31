#include<stdio.h>
int CheckTogTic(int n);
void xuat(int n);
int main()
{
	for(int i=10;i<100;i++)
	{
		if(CheckTogTic(i)==1)
		   xuat(i);
	}
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
void xuat(int n)
{
	 printf("%d ",n);
}
