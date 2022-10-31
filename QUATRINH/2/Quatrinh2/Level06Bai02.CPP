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
	float s=0;
	for(int i=0;i<n;i++)
	{
		s=s+A[i];
	}
	return s;
}
void OutPut(float n)
{
	printf("tong mang vua nhap la: %.2f",n);
}
