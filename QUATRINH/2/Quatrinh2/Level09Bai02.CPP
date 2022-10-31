#include<stdio.h>
void InPut(int &n, float A[]);
int TimMang(int m, float A[], int n, float B[]);
void OutPut(float n);
int main()
{
	int m,n;
	float  A[100], B[100];
	InPut(m,A);
	InPut(n,B);
	TimMang(m,A,n,B);
	return 0;
	
}
void InPut(int &n, float A[])
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
		scanf("%f",&A[i]);
	}
}
int TimMang(int m, float A[], int n, float B[])
{
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(A[i]==B[j])
			    break;
			else if(j==n-1)
			    OutPut(A[i]);
		}
	}
}
void OutPut(float n)
{
	printf("%f ",n);
}
