#include<stdio.h>
void InPut(int A[][100], int &m, int &n);
void MainDiagonal(int A[][100], int m, int n);
void Swap(int &x, int &y);
void OutPut(int A[][100], int m, int n);
int main()
{
	int A[100][100],m,n;
	InPut(A,m,n);
	OutPut(A,m,n);
	MainDiagonal(A,m,n);
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
void MainDiagonal(int A[][100], int m, int n)
{
	for (int i=0;i<m;i++)
        for (int j=i+1;j<m;j++)
            if(A[i][i]>A[j][j])
           {
                Swap(A[i][i],A[j][j]);
           }
}
void Swap(int &x, int &y)
{
	int temp = x;
	x = y;
	y = temp;
}
void OutPut(int A[][100], int m, int n)
{
    printf("\n");
   for(int i = 0; i < m; i++)
   {
      for(int j = 0; j < n; j++)
         printf("%d\t", A[i][j]);
      printf("\n");
   }
}
