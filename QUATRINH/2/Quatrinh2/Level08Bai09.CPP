#include<stdio.h>
#include<math.h>
void InPut(int &n, int A[]);
int CheckSNT(int n);
int FindMax(int n, int A[]);
void OutPut(int n);
int main()
{
	int n,A[100];
	InPut(n,A);
	int Rs = FindMax(n,A);
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
int FindMax(int n, int A[])
{
	int max=0,z;
	for(int i=0; i<n; i++)
	{
		if(CheckSNT(A[i])==1)
		{
		   max = A[i];
		   z=i;
		   break;
		}
	}
	for(int i=z; i<n; i++)
	{
		if(A[i]>max&&CheckSNT(A[i])==1)
		   max = A[i];
	}
	return max;
}
int CheckSNT(int n)
{
	int dem=0;
	if(n<2)
	   return 0;
	for(int i=2; i<=sqrt(n);i++)
	{
		if(n%i==0)
		   dem++;
	}
	if(dem==0)
	   return 1;
	return 0;
}
void OutPut(int n)
{
   printf("%d",n);
}
