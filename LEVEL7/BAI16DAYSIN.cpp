#include<stdio.h>
void InPut(int &n, int A[]);
void OutPut(int n);
int CheckSin(int n, int A[]);
int main()
{
	int n, A[100];
	InPut(n,A);
	int Rs = CheckSin(n,A);
	OutPut(Rs);
	return 0;
}
void InPut(int &n, int A[])
{
	do
	{
		printf("vui long nhap so phan tu mang: ");
		scanf("%d",&n);
		if(n<=0)
		   printf("vui long nhap so phan tu lon hon 0\n");
	}
	while(n<=0);
	for(int i=0;i<n;i++)
	{
		printf("A[%d]=",i);
		scanf("%d",&A[i]);
	}
}
int CheckSin(int n, int A[])
{
	int dem=0;
	for(int i=02;i<n-1;i++)
	{
		if(((A[i]>A[i-1])&&(A[i]>A[i+1]))||((A[i]<A[i-1])&&(A[i]<A[i+1])))
		{
			if((A[i]==A[i+2])&&(A[i]==A[i-2]))
			   return 1;
		    return 0;
		}
	}
}
void OutPut(int n)
{
	printf("Mang vua nhap co phai day so sin?\n");
	if(n==1)
	   printf("Co");
	else
	   printf("Khong");
}
