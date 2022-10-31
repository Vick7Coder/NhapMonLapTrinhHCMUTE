#include<stdio.h>
void InPut(int A[][100], int &mA, int &nA, int B[][100], int &mB, int &nB);
void Sum(int A[][100], int B[][100], int mA, int nA, int C[][100]);
void OutPut(int A[][100], int m, int n);
int main()
{
	int A[100][100],nA,mA,B[100][100],nB,mB;
	InPut(A,mA,nA,B,mB,nB);
	int C[100][100],mC,nC;
	Sum(A,B,mA,nA,C);
	OutPut(C,mA,nA);
	return 0;
}
void InPut(int A[][100], int &mA, int &nA, int B[][100], int &mB, int &nB)
{
	printf("mA= ");
	scanf("%d",&mA);
	printf("nA= ");
	scanf("%d",&nA);
	for(int i=0;i<mA;i++)
	{
		for(int j=0;j<nA;j++)
		{
			printf("A[%d][%d]= ",i,j);
			scanf("%d",&A[i][j]);
		}
	}
	do
	{
	printf("mB= ");
	scanf("%d",&mB);
	printf("nB= ");
	scanf("%d",&nB);
	if(mB!=mA || nB!=nA)
	   printf("mB=mA&&nB=nA\n");
	}
	while(mB!=mA || nB!=nA);
	for(int i=0;i<mB;i++)
	{
		for(int j=0;j<nB;j++)
		{
			printf("B[%d][%d]= ",i,j);
			scanf("%d",&B[i][j]);
		}
	}
}
void Sum(int A[][100], int B[][100], int mA, int nA, int C[][100])
{
	for(int i=0;i<mA;i++)
	{
		for(int j=0;j<nA;j++)
		   C[i][j]=A[i][j]+B[i][j];
	}
}
void OutPut(int A[][100], int m, int n)
{
	printf("A[m][n] + B[m][n] = \n");
   for(int i = 0; i < m; i++)
   {
      for(int j = 0; j < n; j++)
         printf("%d\t", A[i][j]);
      printf("\n");
   }
}
