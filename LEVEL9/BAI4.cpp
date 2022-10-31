#include<stdio.h>
#include<math.h>
void InPut(int &n, int A[]);
void TachMang(int n, int A[], int &nB, int B[]);
void OutPut(int n, int A[]);
int main()
{
	int n, A[100];
	InPut(n,A);
	int nB, B[100];
	TachMang(n,A,nB,B);
	OutPut(nB,B);
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
void TachMang(int n, int A[], int &nB, int B[])
{
	nB = 0;
	for(int i=0;i<n-1;i++)
	{
		if( A[i] > abs(A[i+1]))
		{
			B[nB++] = A[i];
		}
	}
}
void OutPut(int n, int A[])
{
	for(int i=0;i<n;i++)
	   printf("%d  ",A[i]);
}
