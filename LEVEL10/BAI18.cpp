#include<stdio.h>
void InPut(int A[][100], int &m, int &n);
int CheckSaddle(int A[][100], int m, int n, int x, int y);
int CountSaddle(int A[][100], int m, int n);
void OutPut(int n);
int main()
{
	int A[100][100],m,n;
	InPut(A,m,n);
	int Rs = CountSaddle(A,m,n);
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
int CheckSaddle(int A[][100], int m, int n, int x, int y)
{
	int max = A[x][y];
	for(int i=0;i<n;i++)
	{
		if(A[x][i]>max)
		   return 0;
	}
	for(int j=0;j<m;j++)
	{
		if(A[j][y]<max)
		   return 0;
	}
	return 1;
}
int CountSaddle(int A[][100], int m, int n)
{
	int dem=0;
	for (int i=0;i<m;i++) 
	{
        for (int j=0;j<n;j++) 
		{
			if(CheckSaddle(A,m,n,i,j)==1)
			   dem++;
		}
	}
	return dem;
}
void OutPut(int n)
{
	printf("So luong diem yen ngua cua ma tran la: %d",n);
}
