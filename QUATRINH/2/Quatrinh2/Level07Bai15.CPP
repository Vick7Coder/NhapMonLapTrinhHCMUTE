#include<stdio.h>
void InPut(int &n, int A[]);
int CheckCSC(int n, int A[]);
void OutPut(int n);
int main()
{
	int n, A[100];
	InPut(n,A);
	int Rs = CheckCSC(n,A);
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
		   printf("n>0\n");
	}
	while(n<=0);
	for(int i=1;i<=n;i++)
	{
		printf("A[%d]=",i);
		scanf("%d",&A[i]);
	}
}
int CheckCSC(int n, int A[])
{
	int d = A[2]-A[1];
	for(int i=1;i<=n;i++)
	{
		if(A[i]!=(A[1]+(i-1)*d))
		   return 0;
	}
	return 1;
}
void OutPut(int n)
{
	printf("mang co tao thanh 1 day cap so cong khong ?\n");
	if(n==1)
	   printf("co");
	else
	   printf("khong");
}
