#include<stdio.h>
void InPut(int &n, int A[]);
int FindAm(int n, int A[]);
void OutPut(int n);
int main()
{
	int n,A[100];
	InPut(n,A);
	int Rs = FindAm(n,A);
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
		   printf("n>0");
	}
	while(n<=0);
	for(int i=0;i<n;i++)
	{
		printf("A[%d]= ",i);
		scanf("%d",&A[i]);
	}
}
int FindAm(int n, int A[])
{
	int max=0,z;
	for(int i=0; i<n; i++)
	{
		if(A[i]<0)
		{
		   max = A[i];
		   z=i;
		   break;
		}
	}
	for(int i=z; i<n; i++)
	{
		if(A[i]>max&&A[i]<0)
		   max = A[i];
	}
	return max;
}
void OutPut(int n)
{
	if(n==0)
	   printf("mang khong co so am");
	else
	   printf("so am lon nhat la: %d",n);
}
