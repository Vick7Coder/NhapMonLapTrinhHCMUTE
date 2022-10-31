#include<stdio.h>
void InPut(int A[][100], int &m, int &n);
int FindMax(int A[][100], int m, int n);
void FindAllMax(int A[][100], int m, int n);
void OutPut(int dem, int x, int y);
int main()
{
	int A[100][100],m,n;
	InPut(A,m,n);
	FindAllMax(A,m,n);
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
int FindMax(int A[][100], int m, int n)
{
	int max=A[0][0];
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(A[i][j]>max)
			   max=A[i][j];
		}
	}
	return max;
}
void FindAllMax(int A[][100], int m, int n)
{
	int max=FindMax(A,m,n);
	int dem=1;
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(A[i][j]==max)
			{
				OutPut(dem,i,j);
				dem++;
			}
		}
	}
}
void OutPut(int dem, int x, int y)
{
	printf("Toa do cua vi tri lon nhat no.%d la: [%d][%d]\n",dem,x,y);
}
