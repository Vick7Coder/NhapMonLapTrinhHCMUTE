#include<stdio.h>
void InPut(int &n, int A[]);
int Check(int m, int A[], int n, int B[]);
void OutPut(int n);
int main()
{
	int m,n, A[100], B[100];
	InPut(m,A);
	InPut(n,B);
	int Rs = Check(m,A,n,B);
	OutPut(Rs);
	return 0;
}
void InPut(int &n, int A[])
{
	do
	{
		printf("n= ");
		scanf("%d",&n);
		if(n<=0)
		   printf("!!!n>0\n");
	}
	while(n<=0);
	for(int i=0;i<n;i++)
	{
		printf("A[%d]=",i);
		scanf("%d",&A[i]);
	}
}
int Check(int m, int A[], int n, int B[])
{
	int dem = 0;
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(A[i]==B[j])
			    dem++;
		}
	}
	if(dem==m)
	   return 1;
	return 0;
	
}
void OutPut(int n)
{
	printf("Hay co biet tat ca phan tu trong mang A co nam trong mang B khong?\n");
	if(n==1)
	   printf("Co");
	else
	   printf("Khong");
}
