#include<stdio.h>
void InPut(int &n, int A[], int &x);
int HowMuch(int n, int A[], int x);
void OutPut(int n);
int main()
{
	int n,x;
	int A[100];
	InPut(n,A,x);
	int Rs = HowMuch(n,A,x);
	OutPut(Rs);
	return 0;
}
void InPut(int &n, int A[], int &x)
{
	printf("vui long nhap so phan tu mang: ");
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		printf("vui long nhap A[%d]=",i);
		scanf("%d",&A[i]);
	}
	printf("vui long nhap x: ");
	scanf("%d",&x);
}
int HowMuch(int n, int A[], int x)
{
	int dem=0;
	for(int i=1;i<=n;i++)
	{
		if(A[i]==x)
		{
		   dem++;
	    }
	}
	return dem;
}
void OutPut(int n)
{
	printf("so phan tu bang x cua mang la: %d",n);
}
