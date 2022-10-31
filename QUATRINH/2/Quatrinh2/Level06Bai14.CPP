#include<stdio.h>
void InPut(int &n, float A[]);
float Sum(int n, float A[]);
void OutPut(float n);
int main()
{
	int n;
	float A[100];
	InPut(n,A);
	float Rs = Sum(n,A);
	OutPut(Rs);
	return 0;
}
void InPut(int &n, float A[])
{
	printf("vui long nhap so phan tu mang: ");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		printf("vui long nhap A[%d]=",i);
		scanf("%f",&A[i]);
	}
}
float Sum(int n, float A[])
{
	for(int i=0;i<n;i++)
	{
		if(A[i]<0 )
		{
		   return A[i];
	    }
	}
	return 1;
}
void OutPut(float n)
{
	if(n==1)
	   printf("1");
	else
	   printf("%f",n);
}
