#include<stdio.h>
void InPut(int &n);
int Gt(int n);
int Tog(int n);
float Sum(int n);
void OutPut(float n);
int main()
{
	int n;
	InPut(n);
	float Rs = Sum(n);
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
		   printf("vui long nhap so duong \n");
	}
	while(n<0);
}
int Gt(int n)
{
	if(n==0)
	   return 1;
	return Gt(n-1)*n;
}
int Tog(int n)
{
	if(n==0)
	   return 0;
	if(n==1)
	   return 1;
	return Tog(n-1)+n;
}
float Sum(int n)
{
	if(n==0)
	   return 0;
	return Sum(n-1)+(Tog(n)/(float)Gt(n));
}
void OutPut(float n)
{
	printf("tong la: %.2f",n);
}
