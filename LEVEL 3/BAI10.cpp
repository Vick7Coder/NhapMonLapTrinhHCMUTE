#include<stdio.h>
void InPut(int &a, int &b, int &n);
int Sum(int a, int b, int n);
void OutPut(int n);
int main()
{
	int a,b,n;
	InPut(a,b,n);
	int Result = Sum(a,b,n);
	OutPut(Result);
	return 0;
}
void InPut(int &a, int &b, int &n)
{
	do
	{
	printf("vui long nhap a: ");
	scanf("%d",&a);
	printf("vui long nhap b: ");
	scanf("%d",&b);
	printf("vui long nhap n: ");
	scanf("%d",&n);
	if(a>=n||b>=n)
	   printf("vui long nhap a,b<n !!!");
    }
    while(a>=n||b>=n);
}
int Sum(int a, int b, int n)
{
	int s=0;
	for(int i=1;i<n;i++)
	{
		if((i%a==0)&&(i%b!=0))
		   s+=i;
	}
	return s;
}
void OutPut(int n)
{
	printf("tong la: %d",n);
}

