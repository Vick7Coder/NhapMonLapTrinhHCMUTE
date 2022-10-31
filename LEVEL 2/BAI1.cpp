#include<stdio.h>
void InPut(int &a, int &b);
float Devision(int a, int b, float &dev);
void OutPut(int b, float x);
int main()
{
	int a,b;
	float dev;
	InPut(a,b);
	float Result = Devision(a,b,dev);
	OutPut(Result,dev);
	return 0;
}
void InPut(int &a, int &b)
{
	printf("vui long nhap so a: ");
	scanf("%d",&a);
	printf("vui long nhap so b: ");
	scanf("%d",&b);
}
float Devision(int a, int b, float &dev)
{
	if(b==0)
	   return 0;
	else
	   {
	   	dev = a/(float)b;
	    return 1;
	   }
}
void OutPut(int b, float x)
{
	if(b==0)
	   printf("khong chia duoc!!!");
	else
	   printf("%.2f",x);
}
