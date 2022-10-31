#include<stdio.h>
void InPut(float A[][100], int &m, int &n);
int CountEven(float A[][100], int m, int n);
void OutPut(int n);
int main()
{
	float A[100][100];
	int m,n;
	InPut(A,m,n);
	int Rs = CountEven(A,m,n);
	OutPut(Rs);
	return 0;
}
void InPut(float A[][100], int &m, int &n)
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
			scanf("%f",&A[i][j]);
		}
	}
}
int CountEven(float A[][100], int m, int n)
{
	int dem=0;
	for(int i=1;i<m-1;i++)
	{
			if(A[i][0]==(int)A[i][0] && (int)A[i][0]%2==0)
			   dem++;
			if(A[i][n-1]==(int)A[i][n-1] && (int)A[i][n-1]%2==0)
			   dem++;
	}
	for(int j=0;j<n;j++)
	{
		if(A[0][j]==(int)A[0][j] && (int)A[0][j]%2==0)
		   dem++;
		if(A[m-1][j]==(int)A[m-1][j] && (int)A[m-1][j]%2==0)
		   dem++;
	}
	return dem;
}
void OutPut(int n)
{
	printf("so luong so chan tren bien la: %d",n);
}
