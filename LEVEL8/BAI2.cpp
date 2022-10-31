#include<stdio.h>
void InPut(int &n, int A[]);
int CheckZero(int n, int A[]);
void OutPut(int n);
int main()
{
	int n,A[100];
	InPut(n,A);
	int Rs = CheckZero(n,A);
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
int CheckZero(int n, int A[])
{
	for(int i=0;i<n-1;i++)
	{
		if( (A[i]==0) && (A[i+1]==0) )
		   return 1;
	}
	return 0;
}
void OutPut(int n)
{
	printf("Mang so nguyen co ton tai 2 gia tri 0 lien tiep khong?\n");
	if(n==1)
	   printf("Co");
	else
	   printf("Khong");
}
