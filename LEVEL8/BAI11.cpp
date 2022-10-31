#include<stdio.h>
void InPut(int &n, int A[]);
int FindMinChan(int n, int A[]);
void OutPut(int n);
int main()
{
	int n,A[100];
	InPut(n,A);
	int Rs = FindMinChan(n,A);
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
		   printf("n>0");
	}
	while(n<=0);
	for(int i=0;i<n;i++)
	{
		printf("A[%d]= ",i);
		scanf("%d",&A[i]);
	}
}
int FindMinChan(int n, int A[])
{
	int min=-1,z;
	for(int i=0; i<n; i++)
	{
		if(A[i]%2==0)
		{
		   min = A[i];
		   z=i;
		   break;
		}
	}
	for(int i=z; i<n; i++)
	{
		if(A[i]<min&&A[i]%2==0)
		   min = A[i];
	}
	return min;
}
void OutPut(int n)
{
	printf("%d",n);
}
