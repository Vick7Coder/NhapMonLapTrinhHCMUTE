#include<stdio.h>
void InPut(int A[],int B[], int &n);
void OutPut(int A[], int n);
void MixArr(int A[], int n, int B[], int C[], int &nC);
int main()
{
	int A[100],nA,B[100],C[2*100],nC;
	InPut(A,B,nA);
	MixArr(A,nA,B,C,nC);
	OutPut(C,nC);
	return 0;
}
void InPut(int A[],int B[], int &n)
{
	printf("n= ");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		printf("A[%d] = ",i);
		scanf("%d",&A[i]);
	}
	
	for(int i=0;i<n;i++)
	{
		printf("B[%d] = ",i);
		scanf("%d",&B[i]);
	}
	
}
void OutPut(int A[], int n)
{
	for(int i=0;i<n;i++)
	   printf("%d\t",A[i]);
}
void MixArr(int A[], int n, int B[], int C[], int &nC)
{
	int iA=0;
	int iB=0;
	nC=0;
	while(iA<n&&iB<n)
	{
		C[nC++]=A[iA++];
		C[nC++]=B[iB++];
	}
	
}
