#include<stdio.h>
void InPut(int &n, int A[]);
void OutPut(int n, int A[]);
int main()
{
	int n, A[100];
	InPut(n,A);
	OutPut(n,A);
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
void OutPut(int n, int A[])
{
	for(int i=0;i<n;i++)
	   printf("%d  ",A[i]);
}
