#include<stdio.h>
#include<math.h>
void InPut(int &n, int A[]);
void Delete(int A[], int &n, int vtx);
void DeleteLap(int A[], int &n);
void OutPut(int n, int A[]);
int main()
{
	int n, A[100];
	InPut(n,A);
	DeleteLap(A,n);
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
void Delete(int A[], int &n, int vtx)
{
	for (int i=vtx;i<n-1;i++)
		A[i] = A[i+1];
	n--;
}
void DeleteLap(int A[], int &n)
{
   for(int i=0;i<n;i++)
	{
		for(int j = i+1; j < n; j++) 
        {
            if(A[i] == A[j])
            {
                Delete(A,n,i); 
                j--;
            }
            
        }
	}
}
void OutPut(int n, int A[])
{
	for(int i=0;i<n;i++)
	   printf("%d  ",A[i]);
}
