#include<stdio.h>
void InPut(int &n, float A[]);
float FindAm(int n, float A[]);
void OutPut(float n);
int main()
{
	int n;
	float A[100];
	InPut(n,A);
	float Rs = FindAm(n,A);
	OutPut(Rs);
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
float FindAm(int n, float A[])
{
	float max=0;
	int z;
	for(int i=0; i<n; i++)
	{
		if(A[i] < 0)
		{
		   max = A[i];
		   z=i;
		   break;
		}
	}
	for(int i=z; i<n; i++)
	{
		if(A[i]>max&&A[i]<0)
		   max = A[i];
	}
	return max;
}
void OutPut(float n)
{
	printf("%f",n);
}
