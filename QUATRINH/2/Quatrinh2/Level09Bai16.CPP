#include<stdio.h>
void InPut(int &n, int A[]);
void Chan(int A[], int x);
void Khong(int A[], int x, int y);
void XepChanLe(int n, int A[]);
void OutPut(int n, int A[]);
int main()
{
	int n,A[100];
	InPut(n,A);
	XepChanLe(n,A);
	OutPut(n,A);
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
void Chan(int A[], int x)
{
    int temp = A[x];
    for(int i=x;i>0;i--)
        A[i]=A[i - 1];
    A[0] = temp;
}
void Khong(int A[], int x, int y)
{
    for(int i = x; i > y; i--)
        A[i] = A[i - 1];        
    A[y] = 0;
}
void XepChanLe(int n, int A[])
{
	int i;
    int x = 0;
    for(i=0;i<n;i++)
    {
        if(A[i]%2==0 && A[i]!=0)
           Chan(A,i);
    }
   for(i=0;i<n;i++)
    {
        if(A[i]%2!=0)
        {
            x=i;
            break;
        }
    }
    while(i<n)
    {
        if(A[i]==0)
        {
            Khong(A,i,x);
        }
        i++;
    }
}
void OutPut(int n, int A[])
{
	for(int i=0;i<n;i++)
	   printf("%d  ",A[i]);
}
