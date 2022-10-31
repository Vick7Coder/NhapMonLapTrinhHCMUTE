#include<stdio.h>
void InPut(int A[], int &n);
void OutArr(int A[], int n);
int CheckUp(int B[], int n);
int CountArrUp(int A[], int n);
void OutPut(int n);
int main()
{
	int A[100],n;
	InPut(A,n);
	OutArr(A,n);
	int Rs=CountArrUp(A,n);
	OutPut(Rs);
	return 0;
}
void InPut(int A[], int &n)
{
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	   scanf("%d",&A[i]);
}
void OutArr(int A[], int n)
{
	for(int i=0;i<n;i++)
	   printf("%d\t",A[i]);
	printf("\n");
}
void OutPut(int n)
{
	printf("%d",n);
}
int CheckUp(int B[], int n)
{
	for(int i=0;i<n-1;i++)
	   if(B[i]>B[i+1])
	      return 0;
	return 1;
}
int CountArrUp(int A[], int n)
{
    int B[100], nB;
    int dem=0;
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
            if(CheckUp(B,nB)==1 && nB>1)
            {
                dem++;
            }
        }
    }
    return dem;
}
