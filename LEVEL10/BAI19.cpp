#include<stdio.h>
void InPut(int A[][100], int &m, int &n, int &k);
int CheckDown(int A[][100], int m, int n, int k);
void OutPut(int n);
int main()
{
	int A[100][100],m,n,k;
	InPut(A,m,n,k);
	int Rs = CheckDown(A,m,n,k);
	OutPut(Rs);
	
	return 0;
}
void InPut(int A[][100], int &m, int &n, int &k)
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
	do
	{
	printf("k = ");
	scanf("%d",&k);
	if(k>m)
	   printf("k<m||k=n\n");
    }
    while(k>m);
}
int CheckDown(int A[][100], int m, int n, int k)
{
	k-=1;
	for(int i=0;i<n;i++)
	{
		if(A[k][i+1]>A[k][i])
		   return 0;
	}
	return 1;
}
void OutPut(int n)
{
	printf("Dong k cua ma tran co giam dan hay khong?\n");
	if(n==1)
	   printf("Co");
	else
	   printf("Khong");
}
