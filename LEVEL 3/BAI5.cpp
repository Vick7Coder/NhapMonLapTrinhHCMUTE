#include<stdio.h>
void InPut(int &n);
int SumDevisor(int n);
void OutPut(int n);
int main()
{
	int n;
	InPut(n);
	int Result = SumDevisor(n);
	OutPut(Result);
	return 0;
}
void InPut(int &n)
{
	printf("vui long nhap n: ");
	scanf("%d",&n);
}
int SumDevisor(int n)
{
	int s = 0;
	for(int i=1; i<n; i++)
	{
		if(n%i==0)
		   s+=i;
	}
	return s;
}
void OutPut(int n)
{
	printf("tong tat ca uoc so cua n la: %d",n);
}
