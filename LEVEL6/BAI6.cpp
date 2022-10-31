#include<stdio.h>
void InPut(int &n, int A[]);
int Sum(int n, int A[]);
void OutPut(int n);
int main()
{
	int n;
	int A[100];
	InPut(n,A);
	int Rs = Sum(n,A);
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
int Sum(int n, int A[])
{
	int dem=0;
	for(int i=1;i<=n;i++)
	{
		if(A[i]<0)
		{
		   dem++;
	    }
	}
	return dem;
}
void OutPut(int n)
{
	printf("so phan tu am cua mang la: %d",n);
}
