#include<stdio.h>
#include<math.h>
void InPut(int &n, int A[]);
int CheckSHT(int n);
int FindMin(int n, int A[]);
void OutPut(int n);
int main()
{
	int n,A[100];
	InPut(n,A);
	int Rs = FindMin(n,A);
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
int FindMin(int n, int A[])
{
	int min=0,z;
	for(int i=0; i<n; i++)
	{
		if(CheckSHT(A[i])==1)
		{
		   min = A[i];
		   z=i;
		   break;
		}
	}
	for(int i=z; i<n; i++)
	{
		if(A[i]<min&&CheckSHT(A[i])==1)
		   min = A[i];
	}
	return min;
}
int CheckSHT(int n)
{
	int s=0;
	for(int i=1;i<n;i++)
	{
		if(n%i==0)
		   s+=i;
	}
	if(s==n)
	   return 1;
	return 0;
}
void OutPut(int n)
{
	printf("%d",n);
}
