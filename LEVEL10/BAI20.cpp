#include<stdio.h>
void InPut(int A[][100], int &m, int &n);
void SortUp(int A[][100], int m, int n);
void InterchangeSort(int A[], int n);
void Swap(int &a, int &b);
void OutPut(int A[][100], int m, int n);
int main()
{
	int A[100][100],m,n;
	InPut(A,m,n);
	OutPut(A,m,n);
	SortUp(A,m,n);
	OutPut(A,m,n);
	return 0;
}
void InPut(int A[][100], int &m, int &n)
{
	printf("m= ");
	scanf("%d",&m);
	printf("n= ");
	scanf("%d",&n);
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			printf("A[%d][%d]= ",i,j);
			scanf("%d",&A[i][j]);
		}
	}
}
void SortUp(int A[][100], int m, int n)
{
	int B[1000],nB=0;;
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		   B[nB++]=A[i][j];
	}
	InterchangeSort(B,nB);
	nB=0;
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		   A[i][j]=B[nB++];
	}
}
void InterchangeSort(int A[], int n)
{
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
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
void OutPut(int A[][100], int m, int n)
{
	printf("\n");
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		   printf("%d\t",A[i][j]);
		printf("\n");
	}
}
