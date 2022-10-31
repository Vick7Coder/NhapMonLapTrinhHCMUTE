#include<stdio.h>
void InPut(int &n, int A[], int &x, int &y);
void CheckKhoang(int n, int A[], int x, int y);
void OutPut(int n);
int main()
{
	int n;
	int A[100],x,y;
	InPut(n,A,x,y);
	CheckKhoang(n,A,x,y);
	return 0;
}
void InPut(int &n, int A[], int &x, int &y)
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
	printf("vui long nhap y: ");
	scanf("%d",&y);
}
void CheckKhoang(int n, int A[], int x, int y)
{
	for(int i=0;i<n;i++)
	{
		if((A[i]>=x)&&(A[i]<=y)&&(A[i]%2==0))
		   OutPut(A[i]);
	}
}
void OutPut(int n)
{
	printf("%d  ",n);
}
