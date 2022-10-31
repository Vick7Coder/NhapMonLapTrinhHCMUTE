#include<stdio.h>
#include<math.h>
void InPut(int &n, int A[]);
int SumSq(int n, int A[]);
int CheckSquare(int n);
void OutPut(int n);
int main()
{
	int n, A[100];
	InPut(n,A);
	int Rs = SumSq(n,A);
	OutPut(Rs);
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
int SumSq(int n, int A[])
{
	int s=0;
	for(int i=0;i<n;i++)
	{
		if(CheckSquare(A[i])==1)
		   s+=A[i];
	}
	return s;
}
int CheckSquare(int n)
{
	float s = sqrt(n);
	if(s==(int)s)
	   return 1;
	return 0;
}
void OutPut(int n)
{
    printf("tong cac so chinh phuong la %d",n);
}
