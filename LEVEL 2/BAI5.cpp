#include<stdio.h>
void InPut(int &x);
int FindMax(int a, int b, int c, int d);
void OutPut(int y);
int main()
{
	int a,b,c,d;
	InPut(a);
	InPut(b);
	InPut(c);
	InPut(d);
	int Result = FindMax(a,b,c,d);
	OutPut(Result);
	return 0;
}
void InPut(int &x)
{
	printf("vui long nhap so: ");
	scanf("%d",&x);
}
int FindMax(int a, int b, int c, int d)
{
	int max1 = a;
	int max2 = c;
	if(a < b)
	   max1 = b;
	if(c < d)
	   max2 = d;
	int max = max1;
	if(max1 < max2)
	   max = max2;
	return max;
}
void OutPut(int y)
{
	printf("so lon nhat trong 4 so la: %d",y);
}
