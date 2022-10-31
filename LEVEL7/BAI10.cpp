#include<stdio.h>
void InPut(int &n, int A[]);
int FindChan(int n, int A[]);
int CheckChan(int n);
void OutPut(int n);
int main()
{
	int n, A[100];
	InPut(n,A);
	FindChan(n,A);
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
int FindChan(int n, int A[])
{
	for(int i=0;i<n;i++)
	{
		if(CheckChan(A[i])==1)
		   OutPut(A[i]);
	}
}
int CheckChan(int n)
{
	for(int i=n;n!=0;n/=10)
	if(n%2==0)
	   return 1;
	return 0;
}
void OutPut(int n)
{
	printf("%d  ",n);
}
