#include<stdio.h>
#include<math.h>
void InPut(int &n, int A[]);
int CheckLe(int n, int A[]);
int FindLeDau(int n);
void OutPut(int n);
int main()
{
	int n,A[100];
	InPut(n,A);
	int Rs = CheckLe(n,A);
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
int CheckLe(int n, int A[])
{
	for(int i=0;i<n;i++)
	{
		if( FindLeDau(A[i])==1 )
		{
		   return A[i];
	    }
	}
	return 0;
}
int FindLeDau(int n)
{
	for(int i=n;i!=0;i/=10)
	{
		n=i;
	}
    if(n%2==1)
       return 1;
    return 0;
	
}
void OutPut(int n)
{
	if(n==0)
	   printf("0");
	else
	   printf("Gia tri dau tien co chu so dau le la: %d",n);
}
