#include<stdio.h>
void InPut(float A[], int &n);
float FindMax(float A[], int n);
void DeleteMax(float A[], int &n);
void Delete(float A[], int &n, int vtx);
void OutPut(float A[], int n);
int main()
{
    int n;
	float A[100];
	InPut(A,n);
	DeleteMax(A,n);
	OutPut(A,n);
	return 0;
}
void InPut(float A[], int &n)
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
		scanf("%f",&A[i]);
	}
}
float FindMax(float A[], int n)
{
    float max = A[0];
    for(int i = 0; i < n; i++)
    {
        if(max<A[i])
           max = A[i];
    }
    return max;
}

void DeleteMax(float A[], int &n)
{
    float max =FindMax(A,n);
    for(int i=0;i<n;i++)
    {
        if(A[i]==max)
        {
            Delete(A,n,i);
            i--;
        }
    }
}
void Delete(float A[], int &n, int vtx)
{
	for (int i=vtx;i<n-1;i++)
		A[i] = A[i+1];
	n--;
}
void OutPut(float A[], int n)
{
	for(int i=0;i<n;i++)
	   printf("%f  ",A[i]);
}
