#include<stdio.h>
void InPut(int &n, int A[]);
void InterChangeSort(int A[], int n);
void Swap(int &a, int &b);
int Addx(int A[], int &n, int &x);
void OutPut(int A[], int n);
int main()
{
	int n, A[100];
	InPut(n,A);
	InterChangeSort(A,n);
	OutPut(A,n);
	int x;
	Addx(A,n,x);
	OutPut(A,n);
	return 0;
}
void InPut(int &n, int A[])
{
	do
	{
		printf("n= ");
		scanf("%d",&n);
		if(n<0)
		   printf("n>0\n");
    }
    while(n<=0);
    for(int i=0;i<n;i++)
    {
    	printf("A[%d]= ",i);
    	scanf("%d",&A[i]);
	}
}
void InterChangeSort(int A[], int n)
{
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
	       if(A[i]>A[j])
	           Swap(A[i],A[j]);
	}
}
void Swap(int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;
}
int Addx(int A[], int &n, int &x)
{
	printf("\nx= ");
	scanf("%d",&x);
	if(x<A[n-1])
	{
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
    else if(x>=A[n-1])
    {
    	A[n]=x;
	}
	n++;
}
void OutPut(int A[], int n)
{
	for(int i=0;i<n;i++)
	   printf("%d   ",A[i]);
}
