#include<stdio.h>
void InPut(int &n);
int Sum(int n);
void OutPut(int n);
int main()
{
	int n;
	InPut(n);
	int Result = Sum(n);
	OutPut(Result);
	return 0;
}
void InPut(int &n)
{
	printf("vui long nhap n: ");
	scanf("%d",&n);
}
int Sum(int n)
{
	int s = 1;
	for(int i = 1; i<=n; i++)
	{
		s*=i;
	}
	return s;
}
void OutPut(int n)
{
	printf("n! = %d",n);
}
