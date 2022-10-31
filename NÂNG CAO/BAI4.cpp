#include<stdio.h>
void InPut(int A[], int &n);
void OutPut(int A[], int n);
int CheckUp(int B[], int n);
void SendArrUp(int A[], int n);
int main()
{
	int A[100],n;
	InPut(A,n);
	OutPut(A,n);
	SendArrUp(A,n);
	return 0;
}
void InPut(int A[], int &n)
{
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	   scanf("%d",&A[i]);
}
void OutPut(int A[], int n)
{
	for(int i=0;i<n;i++)
	   printf("%d\t",A[i]);
	printf("\n");
}
int CheckUp(int B[], int n)
{
	for(int i=0;i<n-1;i++)
	   if(B[i]>B[i+1])
	      return 0;
	return 1;
}
void SendArrUp(int A[], int n)
{
    int B[100], nB;
    for(int i=0;i<n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            nB = 0;
            for(int k=i;k<j;k++)
            {
                B[nB++]=A[k];
            }
            if(CheckUp(B,nB)==1)
            {
                OutPut(B,nB);
            }
        }
    }
}
