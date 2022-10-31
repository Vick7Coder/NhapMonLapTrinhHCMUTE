#include<stdio.h>
#include<math.h>
void InPut(int &n, int A[]);
int CheckMangLe(int n, int A[]);
void OutPut(int n);
int main()
{
	int n,A[100];
	InPut(n,A);
	int Rs = CheckMangLe(n,A);
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
int CheckMangLe(int n, int A[])
{
	for(int i=0;i<n-1;i++)
	{
		int k= A[i]+A[i+1];
		if(k%2!=1)
		   return 0;
	}
	return 1;
}
void OutPut(int n)
{
	printf("Mang co tinh chat chan le khong?\n");
	if(n==1)
	   printf("Co");
	else
	   printf("Khong");
}
