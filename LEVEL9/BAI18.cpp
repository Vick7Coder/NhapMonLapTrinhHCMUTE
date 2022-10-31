#include<stdio.h>
void InPut(int &n, int A[]);
void NextRight(int n, int A[], int m);
void OutPut(int n, int A[]);
int main()
{
	int n,k,A[100];
	InPut(n,A);
	NextRight(n,A,k);
	OutPut(n,A);
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
void NextRight(int n, int A[], int k)
{
	printf("k= ");
	scanf("%d",&k);
	while(k>0)
	{
		int temp = A[n-1];
		for(int i=n-1;i>0;i--)
		    A[i]=A[i-1];
		A[0]=temp;
		k--;
	}
}
void OutPut(int n, int A[])
{
	for(int i=0;i<n;i++)
	   printf("%d  ",A[i]);
}
