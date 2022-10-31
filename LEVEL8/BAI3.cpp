#include<stdio.h>
#include<math.h>
void InPut(int &n, int A[]);
int CheckSoGanh(int n, int A[], int &x);
int SoGanh(int n);
void OutPut(int n, int x);
int main()
{
	int n,A[100],x;
	InPut(n,A);
	int Rs = CheckSoGanh(n,A,x);
	OutPut(Rs,x);
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
int CheckSoGanh(int n, int A[], int &x)
{
	for(int i=0;i<n;i++)
	{
		if( SoGanh(A[i])==1 )
		{
			x = A[i];
		   return 1;
	    }
	}
	return 0;
}
int SoGanh(int n)
{
	int s=0;
	for(int i=n;i!=0;i/=10)
	{
		int r = i%10;
		s=s*10 + r;
	}
	if(s==n)
	   return 1;
	return 0;
}
void OutPut(int n, int x)
{
	if(n==1)
	   printf("gia tri dau tien thoa man tinh chat so ganh la %d",x);
	else 
	   printf("mang khong co gia tri nao thoa man tinh chat so ganh");
}
