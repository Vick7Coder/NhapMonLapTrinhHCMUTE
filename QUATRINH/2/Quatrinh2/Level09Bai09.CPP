#include<stdio.h>
void InPut(int &n, int A[]);
int TimMang(int m, int A[], int n, int B[]);
void OutPut(int n);
int main()
{
	int m,n, A[100], B[100];
	InPut(m,A);
	InPut(n,B);
	int a = TimMang(m,A,n,B);
	int b = TimMang(n,B,m,A);
	OutPut(a+b);
	return 0;
	
}
void InPut(int &n, int A[])
{
	do
	{
		printf("n= ");
		scanf("%d",&n);
		if(n<=0)
		   printf("!!!n>0\n");
	}
	while(n<=0);
	for(int i=0;i<n;i++)
	{
		printf("A[%d]=",i);
		scanf("%d",&A[i]);
	}
}
int TimMang(int m, int A[], int n, int B[])
{
	int dem = 0;
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(A[i]==B[j])
			    break;
			else if(j==n-1)
			    dem++;
		}
	}
	return dem;
}
void OutPut(int n)
{
	printf("%d ",n);
}
