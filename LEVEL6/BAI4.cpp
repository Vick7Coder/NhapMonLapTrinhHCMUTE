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
	float dem=0;
	for(int i=1;i<=n;i++)
	{
		if(A[i]%5==0)
		{
		   s=s+A[i];
		   dem++;
	    }
	}
	return s/dem;
}
void OutPut(float n)
{
	printf("tong cac so chia het cho 5 cua mang vua nhap la: %.2f",n);
}
