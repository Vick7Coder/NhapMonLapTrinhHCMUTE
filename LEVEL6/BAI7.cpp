#include<stdio.h>
void InPut(int &n);
int Fibo(int n);
void OutPut(int n);
int main()
{
	int n;
	InPut(n);
	OutPut(n);
	return 0;
}
void InPut(int &n)
{
	printf("vui long nhap n: ");
	scanf("%d",&n);
}
int Fibo(int n)
{
	if(n==0||n==1)
	   return 1;
	else
	   return Fibo(n-1)+Fibo(n-2);
}
void OutPut(int n)
{
	for(int i=0;i<n;i++)
	{
		int s = Fibo(i);
		printf("%d ",s);
	}
}

