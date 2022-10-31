#include<stdio.h>
void InPut(int A[], int &n);
void OutPut(int A[], int n);
void UpDate(int A[], int n, int &vt, int &gt);
void Delete(int A[], int &n, int &vtx);
void Add(int A[], int &n, int &vtx, int &x);
int main()
{
	int A[100],n;
	InPut(A,n);
	int x,y;
	UpDate(A,n,x,y);
	OutPut(A,n);
	int z;
	Delete(A,n,z);
	OutPut(A,n);
	int q, k;
	Add(A,n,q,k);
	OutPut(A,n);
	return 0;
}
void InPut(int A[], int &n)
{
	printf("vui long nhap so luong phan tu mang: ");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		printf("A[%d] = ",i);
		scanf("%d",&A[i]);
	}
}
void OutPut(int A[], int n)
{
	for(int i=0;i<n;i++)
	   printf("\t   %d  ",A[i]);
}
void UpDate(int A[], int n, int &vt, int &gt)
{
	printf("\nnhap vi tri can cap nhat: ");
	scanf("%d",&vt);
	printf("\n nhap gia tri : ");
	scanf("%d",&gt);
	for(int i=0;i<n;i++)
	{
		A[vt]=gt;
	}
}
void Delete(int A[], int &n, int &vtx)
{
	printf("\n nhap vi tri can xoa: ");
	scanf("%d",&vtx);
	if (vtx>=0 && vtx<n)
	{
		for (int i=vtx;i<n-1;i++)
			A[i] = A[i+1];
		n--;
	}
}
void Add(int A[], int &n, int &vtx, int &x)
{
	printf("\nnhap vi tri thu i: ");
	scanf("%d",&vtx);
	printf("\nnhap gia tri x: ");
	scanf("%d",&x);
	vtx++;
	if (vtx>=0 &&vtx<= n)
	{
		for(int i=n;i>vtx;i--)
			A[i]=A[i-1];
		A[vtx]=x;
		n++;
	}
}

