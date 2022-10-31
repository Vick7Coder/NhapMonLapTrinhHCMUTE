#include<stdio.h>
void InPut(int &n);
int GT(int n);
int Sum(int n);
void OutPut(int n);
int main()
{
	int n;
	InPut(n);
	int Rs = Sum(n);
	OutPut(Rs);
	return 0;
}
void InPut(int &n)
{
	do
	{
	printf("vui long nhap n: ");
	scanf("%d",&n);
	if(n<0)
	{
		printf("vui long nhap so duong!! \n");
	}
    }
    while(n<0);
}
int GT(int n)
{
	if(n==0)
	   return 1;
	return GT(n-1)*n;
}
int Sum(int n)
{
	if(n==0)
	   return 0;
	return Sum(n-1)+GT(n);
}
void OutPut(int n)
{
	printf("tong gai thua n la: %d",n);
}
