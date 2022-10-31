#include<stdio.h>
void InPut(int &n, float A[]);
void TimMang(int m, float A[]);
void OutPut(float n);
int main()
{
	int m;
	float  A[100];
	InPut(m,A);
	TimMang(m,A);
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
void TimMang(int m, float A[])
{
	for(int i=0;i<m;i++)
	{
		if((A[i]>=0&&A[i+1]<0) || (A[i]<0&&A[i+1]>=0) || (A[i]>=0&&A[i-1]<0) || (A[i]<0&&A[i-1]>=0) )
		   OutPut(A[i]);
	}
}
void OutPut(float n)
{
	printf("%f ",n);
}
