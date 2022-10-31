#include<stdio.h>
void InPut(int &n);
int Fibo(int n);
void nFibo(int A[], int n);
void OutPut(int A[], int n);
int main()
{
	int n;
	InPut(n);
	int A[100],nA;
	nFibo(A,n);
	OutPut(A,n);
	return 0;
}
void InPut(int &n)
{
	printf("vui long nhap n: ");
	scanf("%d",&n);
}
int Fibo(int n)
{
	if(n==0||n==1)
	   return 1;
	else
	   return Fibo(n-1)+Fibo(n-2);
}
void nFibo(int A[], int n)
{
	int s=n;
	n=0;
	for(int i=0;i<s;i++)
	{
		A[n++]=Fibo(i);
	}
}
void OutPut(int A[], int n)
{
	printf("%d phan tu dau tien cua day Fibo:  ",n);
	for(int i=0;i<n;i++)
	    printf("%d\t",A[i]);
}
