#include<stdio.h>
void NextLeft(int A[], int n, int m);
void InPut(int &n, int A[]);
void LeftAllArr(int n, int A[]);
void OutPut(int n, int A[]);
int main()
{
	int n, A[100];
	InPut(n,A);
	LeftAllArr(n,A);
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
void NextLeft(int A[], int n, int m)
{
    while(m>0)
    {
        int temp = A[0];
        for(int i=0;i<n-1;i++)
            A[i]=A[i+1];
        A[n-1]=temp;
        m--;
    }
}
void LeftAllArr(int n, int A[])
{
	for(int i=1;i<=n;i++)
	{
		NextLeft(A,n,1);
		OutPut(n,A);
	}
}
void OutPut(int n, int A[])
{
	for(int i=0;i<n;i++)
	   printf("%d  ",A[i]);
	printf("\n");
}
