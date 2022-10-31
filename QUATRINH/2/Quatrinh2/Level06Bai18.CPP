#include<stdio.h>
void InPut(int &n, int A[]);
void OutPut(int n, int A[]);
void Swap(int &a, int &b) ;
void Reverse(int n, int A[]) ;
int main()
{
	int n, A[100];
	InPut(n,A);
	Reverse(n,A);
	OutPut(n,A);
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
void OutPut(int n, int A[])
{
	printf("mang vua nhap la: ");
	for(int i=0;i<n;i++)
	{
		printf("%d   ",A[i]);
	}
}
void Swap(int &a, int &b) 
{
    int tmp = a;
    a = b;
    b = tmp;
}
void Reverse(int n, int A[]) 
{
    int j = n - 1;
    for (int i = 0; i < n/2; i++) 
	{
        Swap(A[i], A[j]);
        j--;
    }
}
