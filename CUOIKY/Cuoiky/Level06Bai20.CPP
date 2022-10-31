#include<stdio.h>
void InPut(int &n, int A[], int &x, int &y);
void CheckKhoang(int n, int A[], int x, int y, int &nB, int B[]);
void OutPut(int n, int A[], int x, int y);
int main()
{
	int n,A[100],x,y,nB,B[100];
	InPut(n,A,x,y);
	CheckKhoang(n,A,x,y,nB,B);
	OutPut(nB,B,x,y);
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
void CheckKhoang(int n, int A[], int x, int y, int &nB, int B[])
{
	nB=0;
	for(int i=0;i<n;i++)
	{
		if((A[i]>=x)&&(A[i]<=y)&&(A[i]%2==0))
		   B[nB++]=A[i];
	}
}
void OutPut(int n, int A[], int x, int y)
{
	printf("Cac gia tri chan thuoc doan [%d,%d] la:  ",x,y);
	for(int i=0;i<n;i++)
	   printf("%d\t",A[i]);
}
