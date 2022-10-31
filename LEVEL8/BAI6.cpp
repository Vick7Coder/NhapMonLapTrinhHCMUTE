#include<stdio.h>
void InPut(int &n, int A[]);
void swap(int &a, int &b);
int DoiCho(int n, int A[]);
void OutPut(int n, int A[]);
int main()
{
	int n,A[100];
	InPut(n,A);
	DoiCho(n,A);
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
		   printf("n>0");
	}
	while(n<=0);
	for(int i=0;i<n;i++)
	{
		printf("A[%d]= ",i);
		scanf("%d",&A[i]);
	}
}
void swap(int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;
}
int DoiCho(int n, int A[])
{
	int max = 0, min = 0;
	for(int i=0; i<n; i++)
	{
		if(A[i]>A[max])
		   max = i;
		   
		if(A[i]<A[min])
		   min = i;
	}
	swap(A[max],A[min]);
	
}
void OutPut(int n, int A[])
{
	for(int i=0;i<n;i++)
	   printf("%d  ",A[i]);
}
