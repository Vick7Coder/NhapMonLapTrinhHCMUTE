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
		do
		{
		printf("vui long nhap A[%d]=",i);
		scanf("%d",&A[i]);
		if(A[i]<0)
		   printf("vui long nhap so khong am!!!\n");
	    }
	    while(A[i]<0);
	}
}
int Sum(int n, int A[])
{
	int s=0;
	for(int i=1;i<=n;i++)
	{
		if(A[i]%2==0)
		{
		   s=s+A[i];
	    }
	}
	return s;
}
void OutPut(int n)
{
	printf("tong cac phan tu chan cua mang la: %d",n);
}
