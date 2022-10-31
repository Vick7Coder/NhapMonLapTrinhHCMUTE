#include<stdio.h>
void InPut(int &n, int A[]);
int CheckZero(int n, int A[]);
void OutPut(int n);
int main()
{
	int n, A[100];
	InPut(n,A);
	int Rs=CheckZero(n,A);
	OutPut(Rs);
	return 0;
}
void InPut(int &n, int A[])
{
	printf("vui long nhap so phan tu mang: ");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		printf("vui long nhap A[%d]=",i);
		scanf("%d",&A[i]);
	}
}
int CheckZero(int n, int A[])
{
	int s=-1;
	for(int i=0;i<n;i++)
	{
		if(A[i]>0)
		   s=A[i];
	}
	return s;
}
void OutPut(int n)
{
	printf("%d",n);
}
