#include<stdio.h>
void InPut(int &n, int A[]);
int FindAMin(int n, int A[]);
void OutPut(int n);
int main()
{
	int n,A[100];
	InPut(n,A);
	int Rs = FindAMin(n,A);
	OutPut(Rs);
	return 0;
}
void InPut(int &n, int A[])
{
	do
	{
		printf("n = ");
		scanf("%d",&n);
		if(n<=0)
		   printf("!!!n>0");		
	}
	while(n<=0);
	for(int i=0;i<n;i++)
	{
		printf("A[%d]=",i);
		scanf("%d",&A[i]);
	}
}
int FindAMin(int n, int A[])
{
	int i,Area=0;
	int min = A[0];
	for(i=0;i<n;i++)
	{
		if(A[i]<min)
		{
		   min = A[i];
		   Area = i;
	    }
	}
	return Area;
}
void OutPut(int n)
{
	printf("vui tri gia tri nho nhat la A[%d]",n);
}
