#include<stdio.h>
void InPut(int &n, int A[]);
int FindMaxSecond(int A[], int n);
void OutPut(int n);
int main()
{
	int n,A[100];
	InPut(n,A);
	int Rs = FindMaxSecond(A,n);
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
int FindMaxSecond(int A[], int n)
{
	int max1, max2;
	if(A[0]>A[1])
	{
		max1=A[0];
		max2=A[1];
	}
	else
	{
		max1=A[1];
		max2=A[0];
	}
	for(int i=2;i<n;i++)
	{
		if(A[i]>max1)
		{
			max2 = max1;
			max1 = A[i];
		}
		else if(A[i] > max2)
		   max2 = A[i];
	}
	return max2;
}
void OutPut(int n)
{
	printf("gia tri lon thu 2 trong mang la: %d",n);
}
