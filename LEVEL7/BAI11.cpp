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
		   printf("!!!n>0\n");
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
	int i;
	int max=A[0];
	for(i=0;i<n;i++)
	{
		if(A[i]>max)
		   max = A[i];
	}
	if(max==A[n-1])
	   return 1;
	return 0;
}
void OutPut(int n)
{
	if(n==1)
	   printf("mang tang");
	else
	   printf("mang khong tang");
}
