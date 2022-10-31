#include<stdio.h>
#include<math.h>
void InPut(int &n, int A[]);
int UCLN(int a, int b);
int FindUCLN(int n, int A[]);
void OutPut(int n);
int main()
{
	int n,A[100];
	InPut(n,A);
	int Rs = FindUCLN(n,A);
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
		   printf("n>0");
	}
	while(n<=0);
	for(int i=0;i<n;i++)
	{
		printf("A[%d]= ",i);
		scanf("%d",&A[i]);
	}
}
int UCLN(int a, int b)
{
	a = abs(a);
	b = abs(b);
	while(a!=b)
	{
		if(a>b)
		   a = a - b;
		else if(b>a)
		   b = b - a;
	}
	return a;
}
int FindUCLN(int n, int A[])
{
	int temp;
	for(int i=0;i<n-1;i++)
	{
		 temp = UCLN(A[i],A[i+1]);
	}
	return temp;
}
void OutPut(int n)
{
	printf("%d",n);
}
