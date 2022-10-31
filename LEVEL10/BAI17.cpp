#include<stdio.h>
void InPut(int A[][100], int &m, int &n);
int CheckQueen(int A[][100], int m, int n, int x, int y);
int CountQueen(int A[][100], int m, int n);
void OutPut(int n);
int main()
{
	int A[100][100],m,n;
	InPut(A,m,n);
	int Rs=CountQueen(A,m,n);
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
int CheckQueen(int A[][100], int m, int n, int x, int y)
{
	int max = A[x][y];  //linh canh
	int i,j;
	//check dong
	for(int j=0;j<n;j++)
	{
		if(A[x][j]>max)
		   return 0;
	}
	//check cot
	for(int i=0;i<m;i++)
	{
		if(A[i][y]>max)
		   return 0;
	}
	// check cheo trai sang
	i=x+1;
	j=y+1;
	while(i<m&&j<n)
		if(A[i++][j++]>max)
			return 0;
			
	i=x-1;
	j=y-1;
	while(i>=0&&j>=0)
		if(A[i--][j--]>max)
			return 0;
	//check cheo phai sang
	i=x+1;
	j=y-1;
	while(i<m&&j>=0)
		if(A[i++][j--]>max)
			return 0;
			
	i=x-1;
	j=y+1;
	while(i>=0&&j<n)
	    if(A[i--][j++]>max)
			return 0;
	return 1;        
}
int CountQueen(int A[][100], int m, int n)
{
	int dem=0;
	for (int i=0;i<m;i++) 
	{
        for (int j=0;j<n;j++) 
		{
			if(CheckQueen(A,m,n,i,j)==1)
			   dem++;
		}
	}
	return dem;
}
void OutPut(int n)
{
	printf("So luong diem hoang hau cua ma tran la: %d",n);
}

