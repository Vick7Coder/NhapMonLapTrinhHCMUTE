#include<stdio.h>
void InPut(int &n, float A[]);
void FindKhoang(int n, float A[], float &x, float &y);
void OutPut(float a, float b);
int main()
{
	int n;
	float x,y;
	float A[100];
	InPut(n,A);
	FindKhoang(n,A,x,y);
	OutPut(x,y);
	return 0;
}
void InPut(int &n, float A[])
{
	do
	{
		printf("n= ");
		scanf("%d",&n);
		if(n<=0)
		   printf("n>0");
	}
	while(n<=0);
	for(int i=0;i<n;i++)
	{
		printf("A[%d]= ",i);
		scanf("%f",&A[i]);
	}
}
void FindKhoang(int n, float A[], float &x, float &y)
{
	x = A[0]; y = A[0];
	for(int i=0;i<n;i++)
	{
		if(A[i]<x)
		    x = A[i];
		    
		if(A[i]>y)
		    y = A[i]; 
	}
}
void OutPut(float a, float b)
{
	printf("[%.2f,%.2f]",a,b);
}
