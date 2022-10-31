#include<stdio.h>
void InPut(int &n, int A[]);
void TimCucTri(int n, int A[], int &m, int B[]);
int Sum(int n, int A[]);
void OutPut(int n);
int main()
{
	int n,A[100];
	InPut(n,A);
	int m, B[100];
	TimCucTri(n,A,m,B);
	int Rs = Sum(m,B);
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
void TimCucTri(int n, int A[], int &m, int B[])
{
	for(int i=1;i<n-1;i++)
	{
		if( (A[i]>A[i-1]&&A[i]>A[i+1]) || (A[i]<A[i-1]&&A[i]<A[i+1]) )
		   B[m++]=A[i];
	}
}
int Sum(int n, int A[])
{
	int s=0;
	for(int i=0;i<n;i++)
	{
		s+=A[i];
	}
	return s;
}
void OutPut(int n)
{
	printf("S = %d",n);
}
