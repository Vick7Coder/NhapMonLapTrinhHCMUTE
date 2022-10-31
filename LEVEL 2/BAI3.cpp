#include<stdio.h>
void InPut(int &a, int &b, int &c);
int FindMin(int a, int b, int c);
void OutPut(int x);
int main()
{
	int a,b,c;
	InPut(a,b,c);
	int Result = FindMin(a,b,c);
	OutPut(Result);
	return 0;
}
void InPut(int &a, int &b, int &c)
{
	printf(" vui long nhap so a: ");
	scanf("%d",&a);
	printf(" vui long nhap so b: ");
	scanf("%d",&b);
	printf(" vui long nhap so c: ");
	scanf("%d",&c);
}
int FindMin(int a, int b, int c)
{
	int min = a;
	if((min > b)&&(c > b))
	   min = b;
	else if((min > c)&&(b > c))
	   min = c;
	return min;
}
void OutPut(int x)
{
	printf("so co gia tri nho nhat la:  %d", x);
}
