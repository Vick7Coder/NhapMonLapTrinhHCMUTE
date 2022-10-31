#include"stdio.h"
void InPut(int A[], int &n);
void SortDown(int A[], int n);
void Swap(int &a, int &b);
void OutPut(int A[], int n);
int main()
{
	int A[100],n;
	InPut(A,n);
	OutPut(A,n);
	SortDown(A,n);
	OutPut(A,n);
	return 0;
}
void InPut(int A[], int &n)
{
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&A[i]);
	}
}
void SortDown(int A[], int n)
{
	for(int i=0;i<n-1;i++)
	   for(int j=i+1;j<n;j++)
	      if(A[j]>A[i])
	         Swap(A[i],A[j]);
}
void Swap(int &a, int &b)
{
	int temp=a;
	a=b;
	b=temp;
}
void OutPut(int A[], int n)
{
	for(int i=0;i<n;i++)
	   printf("%d\t",A[i]);
	printf("\n");
}
