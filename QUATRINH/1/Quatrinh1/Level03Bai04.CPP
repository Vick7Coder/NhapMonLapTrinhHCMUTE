#include<stdio.h>
#include<math.h>
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
	int m = abs(n);
	for(int i = 1; i<=m; i++)
	{
		s*=i;
	}
	if(n>=0)
	   return s;
	else
	   return -s;
}
void OutPut(int n)
{
	printf("n! = %d",n);
}
