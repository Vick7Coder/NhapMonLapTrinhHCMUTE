#include<stdio.h>
#include<math.h>
void InPut(int &n, int A[]);
int FindNT(int n, int A[]);
int CheckNT(int n);
void OutPut(int n);
int main()
{
	int n, A[100];
	InPut(n,A);
	int Rs = FindNT(n,A);
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
int FindNT(int n, int A[])
{
	int s=-1;
	for(int i=0;i<n;i++)
	{
		if(CheckNT(A[i])==1)
		   s= A[i];
	}
	return s;
}
int CheckNT(int n)
{
	int dem = 0;
	if(n<2)
	   return 0;
	else
	{
		for(int i=2;i<=sqrt(n);i++)
		{
			if(n%i==0)
			   dem++;
		}
	}
	if(dem==0)
	   return 1;
	return 0;
}
void OutPut(int n)
{
    printf("%d",n);
}
