#include<stdio.h>
void InPut(int &n, int A[], int &x);
int Sum(int n, int A[], int x);
void OutPut(int n);
int main()
{
	int n,x,A[100];
	InPut(n,A,x);
	int Rs = Sum(n,A,x);
	OutPut(Rs);
	return 0;
}
void InPut(int &n, int A[], int &x)
{
	printf("vui long nhap so phan tu mang: ");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		printf("vui long nhap A[%d]=",i);
		scanf("%d",&A[i]);
	}
	printf("vui long nhap x: ");
	scanf("%d",&x);
}
int Sum(int n, int A[], int x)
{
	int s = -1;
	for(int i=0;i<n;i++)
	{
		if(A[i]==x)
		{
		   s=i;
	    }
	}
	return s;
}
void OutPut(int n)
{
	printf("%d",n);
}
