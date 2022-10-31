#include<stdio.h>
void InPut(int &n, int A[]);
int CheckLevelUp(int n, int A[]);
void OutPut(int n);
int main()
{
	int n, A[100];
	InPut(n,A);
	int Rs = CheckLevelUp(n,A);
	OutPut(Rs);
	return 0;
}
void InPut(int &n, int A[])
{
	do
	{
		printf("n= ");
		scanf("%d",&n);
		if(n<=0)
		   printf("n>0\n");
	}
	while(n<=0);
	for(int i=0;i<n;i++)
	{
		printf("A[%d]=",i);
		scanf("%d",&A[i]);
	}
}
int CheckLevelUp(int n, int A[])
{
	int max=A[n-1];
	for(int i=0;i<n-1;i++)
	{
		if(A[i]>=max)
		   return 0;
	}
	return 1;
}
void OutPut(int n)
{
	if(n==1)
	   printf("mang tang");
	else
	   printf("mang khong tang");
}
