#include<stdio.h>
void InPut(int A[], int &n);
void OutPut(int A[], int n);
int CheckUp(int B[], int n);
void SonArr(int A[], int n);
int SumArr(int A[], int n);
int main()
{
	int A[100],n;
	InPut(A,n);
	SonArr(A,n);
	return 0;
}
void InPut(int A[], int &n)
{
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	   scanf("%d",&A[i]);
}
void OutPut(int A[], int n, int s)
{
	for(int i=0;i<n;i++)
	   printf("%d\t",A[i]);
	printf("S= %d",s);
	printf("\n");
}
int SumArr(int A[], int n)
{
	int Sum=0;
	for(int i=0;i<n;i++)
	{
		Sum+=A[i];
	}
	return Sum;
}
void SonArr(int A[], int n)
{
    int B[100], nB;
    for(int i=0;i<n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            nB = 0;
            for(int k=i;k<j;k++)
            {
                B[nB]=A[k];
                nB++;
            }
        OutPut(B,nB,SumArr(B,nB));
        }
    }
}
