#include<stdio.h>
void InPut(int &n, int A[]);
int Addx(int A[], int n, int &x);
void OutPut(int A[], int n);
int main()
{
	int A[100],n;
	InPut(n,A);
	OutPut(A,n);
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
	   printf("A[%d]= ",i);
	   Addx(A,n,A[i]);
    }
}
int Addx(int A[], int n, int &x)
{
	scanf("%d",&x);
	for(int i=0;i<n;i++)
	{
		if(x<A[i])
		{
			int a = x;
			for(int j=n;j>i;j--)
			{
				A[j]=A[j-1];
			}
			A[i]=a;
			break;
		}
	}
}
void OutPut(int A[], int n)
{
	for(int i=0;i<n;i++)
	   printf("%d\t",A[i]);
}
