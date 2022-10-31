#include<stdio.h>
void InPut(int &a, int &b, int &c);
int CheckTriangle(int a, int b, int c);
void OutPut(int a, int b, int c);
int main()
{
	int a,b,c;
	InPut(a,b,c);
	OutPut(a,b,c);
	return 0;
}
void InPut(int &a, int &b, int &c)
{
	printf("vui long nhap a: ");
	scanf("%d",&a);
	printf("vui long nhap b: ");
	scanf("%d",&b);
	printf("vui long nhap c: ");
	scanf("%d",&c);
}
int CheckTriangle(int a, int b, int c)
{
	if((a+b>c)&&(a+c>b)&&(b+c>a))
	   return 1;
	return 0;
}
void OutPut(int a, int b, int c)
{
	if(CheckTriangle(a,b,c)==1)
	   printf("%d,%d,%d la do dai ba canh cua mot tam giac",a,b,c);
	else
	   printf("%d,%d,%d khong tao thanh mot tam giac",a,b,c);
}
