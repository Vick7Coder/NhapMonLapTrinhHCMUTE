#include<stdio.h>
void InPut(int &n, int A[]);
int CheckYang(int n, int A[]);
void OutPut(int n);
int main()
{
	int n, A[100];
	InPut(n,A);
	int Rs = CheckYang(n,A);
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
int CheckYang(int n, int A[])
{
	for(int i=0;i<n;i++)
	{
		if(A[i]<0)
		   return 0;
	}
	return 1;
}
void OutPut(int n)
{
	if(n==1)
	   printf("mang gom toan cac so duong");
	else
	   printf("mang so so am");
}
