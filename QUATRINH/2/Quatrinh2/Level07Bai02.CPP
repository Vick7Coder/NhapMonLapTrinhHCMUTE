#include<stdio.h>
void InPut(int &n, int A[]);
int FindHH(int n, int A[]);
int CheckHH(int n);
void OutPut(int n);
int main()
{
	int n, A[100];
	InPut(n,A);
	int Rs = FindHH(n,A);
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
int FindHH(int n, int A[])
{
	for(int i=0;i<n;i++)
	{
		if(CheckHH(A[i])==1)
		   return A[i];
	}
	return -1;
}
int CheckHH(int n)
{
	int S=0;
    for(int i=1;i<n;i++)
    {
    	if(n%i==0)
    	   S+=i;
	}
	if(S==n)
	   return 1;
	return 0;
}
void OutPut(int n)
{
    printf("%d",n);
}
