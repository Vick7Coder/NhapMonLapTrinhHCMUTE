#include<stdio.h>
void InPut(int &n, int A[]);
void MixArr(int A[], int nA, int B[], int nB, int C[], int &nC);
void OutPut(int A[], int n);
int main()
{
	int nA, A[100], nB, B[100], nC, C[100];
	InPut(nA,A);
	InPut(nB,B);
	MixArr(A,nA,B,nB,C,nC);
	OutPut(C,nC);
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
void MixArr(int A[], int nA, int B[], int nB, int C[], int &nC)
{
	int iA=0,iB=0;
	while(iA<nA&&iB<nB)
	{
		C[nC++]=A[iA++];
		C[nC++]=B[iB++];
	}
	while(iA<nA)
	{
		C[nC++]=A[iA++];
	}
	while(iB<nB)
	{
		C[nC++]=B[iB++];
	}
}
void OutPut(int A[], int n)
{
	for(int i=0;i<n;i++)
	   printf("%d  ",A[i]);
}
