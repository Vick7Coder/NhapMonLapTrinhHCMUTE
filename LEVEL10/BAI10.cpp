#include<stdio.h>
void InPut(int A[][100], int &m, int &n);
int Sum(int A[][100], int m, int n);
void OutPut(int n);
int main()
{
	int m,n,A[100][100];
	InPut(A,m,n);
	int Rs = Sum(A,m,n);
	OutPut(Rs);
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
int Sum(int A[][100], int m, int n)
{
	int s = 0;
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			s+=A[i][j];
		}
	}
	return s;
}
void OutPut(int n)
{
	printf("sum = %d",n);
}
