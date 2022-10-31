#include<stdio.h>
void InPut(int &n, int A[]);
void InterChangeSort(int n, int A[]);
void Swap(int &a, int &b);
void Sum(int A[], int nA, int B[], int nB, int C[], int &nC);
void OutPut(int A[], int n);
int main()
{
	int nA, A[100];
	InPut(nA,A);
	InterChangeSort(nA,A);
	OutPut(A,nA);
	int nB, B[100];
	InPut(nB,B); 
	InterChangeSort(nB,B);
	OutPut(B,nB);
	int nC, C[100];
	Sum(A,nA,B,nB,C,nC);
	InterChangeSort(nC,C);
	OutPut(C,nC);
	return 0;
}
void InPut(int &n, int A[])
{
	do
	{
		printf("\nn= ");
		scanf("%d",&n);
		if(n<=0)
		   printf("!!!n>0\n");
	}
	while(n<=0);
	for(int i=0;i<n;i++)
	{
	   printf("A[%d]= ",i);
	   scanf("%d",&A[i]);
    }
}
void InterChangeSort(int n, int A[])
{
	for(int i=0;i<n-1;i++)
	{
		for(int j = i+1;j<n;j++)
		{
			if(A[i]>A[j])
			   Swap(A[i],A[j]);
		}
	}
}
void Swap(int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;
}
void Sum(int A[], int nA, int B[], int nB, int C[], int &nC)
{
	int iA=0;
	int iB=0;
	nC=0;
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
	printf("\n");
	for(int i=0;i<n;i++)
	   printf("%d\t",A[i]);
}
