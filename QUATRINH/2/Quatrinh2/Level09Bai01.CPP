#include<stdio.h>
void InPut(int &n, int A[]);
void TachMang(int n, int A[], int &nB, int B[], int &nC, int C[]);
void OutPut(int n, int A[]);
int main()
{
	int n, A[100];
	InPut(n,A);
	int nB, B[100], nC, C[100];
	TachMang(n,A,nB,B,nC,C);
	OutPut(nB,B);
	OutPut(nC,C);
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
void TachMang(int n, int A[], int &nB, int B[], int &nC, int C[])
{
	nB = 0, nC = 0;
	for(int i=0;i<n;i++)
	{
		if( (A[i]>0) || (A[i]==0) )
		{
			B[nB++] = A[i];
		}
		else 
		    C[nC++] = A[i];
	}
}
void OutPut(int n, int A[])
{
	printf("\n");
	for(int i=0;i<n;i++)
	   printf("%d  ",A[i]);
}
