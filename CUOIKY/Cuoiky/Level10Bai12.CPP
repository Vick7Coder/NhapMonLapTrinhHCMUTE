#include<stdio.h>
void InPut(int A[][100], int &m, int &n);
void SumRow(int A[][100], int m, int n, int B[]);
void SumCol(int A[][100], int m, int n, int B[]);
int SumMain(int A[][100], int m, int n);
int SumSecond(int A[][100], int m, int n);
void OutPutArr(int A[], int n);
void OutPut(int A[],int m, int B[], int n, int s1, int s2);
int main()
{
	int A[100][100],m,n,B[100],C[100];
	InPut(A,m,n);
	SumRow(A,m,n,B);
	SumCol(A,m,n,C);
	int s1=SumMain(A,m,n);
	int s2=SumSecond(A,m,n);
	OutPut(B,m,C,n,s1,s2);
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
void SumRow(int A[][100], int m, int n, int B[])
{
	for(int i=0;i<m;i++)
	{
		int s=0;
		for(int j=0;j<n;j++)
		{
			s+=A[i][j];
		}
		B[i]=s;
	}
}
void SumCol(int A[][100], int m, int n, int B[])
{
	for(int j=0;j<n;j++)
	{
		int s=0;
		for(int i=0;i<m;i++)
		{
			s+=A[i][j];
		}
		B[j]=s;
	}
}
int SumMain(int A[][100], int m, int n)
{
	int s=0;
	for(int i=0;i<n;i++)
	   s+=A[i][i];
	return s;
}
int SumSecond(int A[][100], int m, int n)
{
	int s=0;
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			int z=i+j;
			if(z==(n-1))
			   s+=A[i][j];
		}
	}
	return s;
}
void OutPutArr(int A[], int n)
{
	for(int i=0;i<n;i++)
	   printf("%d   ",A[i]);
	printf("\n");
}
void OutPut(int A[],int m, int B[], int n, int s1, int s2)
{
	printf("Tong cua cac dong cua ma tran la:\t");
	OutPutArr(A,m);
	printf("Tong cua cac cot cua ma tran la:\t");
	OutPutArr(B,n);
	printf("Tong cac phan tu tren duong cheo chinh la: %d\n",s1);
	printf("Tong cac phan tu tren duong cheo phu la: %d",s2);
}

