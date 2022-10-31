#include<stdio.h>
void InPut(int &n, int A[]);
float Sum(int n, int A[]);
void OutPut(float n);
int main()
{
	int n;
	int A[100];
	InPut(n,A);
	float Rs = Sum(n,A);
	OutPut(Rs);
	return 0;
}
void InPut(int &n, int A[])
{
	printf("vui long nhap so phan tu mang: ");
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		printf("vui long nhap A[%d]=",i);
		scanf("%d",&A[i]);
	}
}
float Sum(int n, int A[])
{
	float s=0;
	for(int i=1;i<=n;i++)
	{
		s=s+A[i];
	}
	return s/(float)n;
}
void OutPut(float n)
{
	printf("trung binh cong mang vua nhap la: %.2f",n);
}
