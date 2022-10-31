#include<stdio.h>
void InPut(int A[], int &n);
void OutPut(int A[], int n);
void Sum(int A[], int nA, int B[], int nB, int C[], int &nc);
int main()
{
	int A[100],nA,B[100],nB,C[2*100],nC;
	InPut(A,nA);
	OutPut(B,nB);
	Sum(A,nA,B,nB,C,nC);
	OutPut(C,nC);
	return 0;
}
void InPut(int A[], int &n)
{
	printf("vui long nhap so phan tu mang: ");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		printf("A[%d] = ",i+1);
		scanf("%d",&A[i]);
	}
}
void OutPut(int A[], int n)
{
	for(int i=0;i<n;i++)
	   printf("%d\t",A[i]);
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
