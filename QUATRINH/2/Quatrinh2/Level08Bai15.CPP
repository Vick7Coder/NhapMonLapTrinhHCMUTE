#include<stdio.h>
void InPut(int &n, float A[], float &x);
float FindMax(int n, float A[], float x);
void OutPut(float a);
int main()
{
	int n;
	float x, A[100];
	InPut(n,A,x);
	float Rs = FindMax(n,A,x);
	OutPut(Rs);
	return 0;
}
void InPut(int &n, float A[], float &x)
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
	printf("x= ");
	scanf("%f",&x);
}
float FindMax(int n, float A[], float x)
{
	float max = 0;
	for(int i=0;i<n;i++)
	{
		if(A[i]<0 && A[i]>x)
		   max = A[i];
	}
	return max;
}
void OutPut(float a)
{
	printf("%f",a);
}
