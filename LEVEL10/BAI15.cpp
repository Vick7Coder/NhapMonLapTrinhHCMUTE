#include<stdio.h>
#include<math.h>
#include<stdlib.h>
void InPut(int A[][100], int &m, int &n);
int SoNguyenTo(int n);
int FirstNT(int A[][100], int m, int n);
void OutPut(int x, int y);
int main()
{
	int A[100][100],m,n;
	InPut(A,m,n);
	FirstNT(A,m,n);
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
int SoNguyenTo(int n)
{
	int dem = 0;
	if(n<2)
	   return 0;
	for(int i=2;i<=sqrt(n);i++)
	{
		if(n%i==0)
		  dem++;
	}
	if(dem==0)
	   return 1;
	return 0;
}
int FirstNT(int A[][100], int m, int n)
{
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(SoNguyenTo(A[i][j]))
			{
			   OutPut(i,j);
			   exit(0);
		    }
		}
	}
}
void OutPut(int x, int y)
{
	printf("Toa do cua so nguyen to dau tien la: [%d][%d]",x,y);
}
