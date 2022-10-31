#include<stdio.h>
void InPut(int &n, int A[]);
int NumMax(int n, int A[]);
void OutPut(int n);
int main()
{
	int n, A[100];
	InPut(n,A);
	int rs = NumMax(n,A);
	OutPut(rs);
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
int NumMax(int n, int A[])
{
	int dem = 0;
	int max = A[0];
	for(int i=0;i<n;i++)
	{
		if(max==A[i])
		   dem++;
		else if(max<A[i])
		{
			max = A[i];
			dem=1;
		}
	}
	return dem;
}
void OutPut(int n)
{
	printf("%d",n);
}
