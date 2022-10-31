#include<stdio.h>
void InPut(int &n, int &k);
int Gt(int n);
int Combination(int n, int k);
void OutPut(int n);
int main()
{
	int n,k;
	InPut(n,k);
	int Rs = Combination(n,k);
	OutPut(Rs);
	return 0;
}
void InPut(int &n, int &k)
{
	do
	{
		printf("n= ");
		scanf("%d",&n);
		printf("k= ");
		scanf("%d",&k);
		if(k>n)
		   printf("k<=n!!!\n");
		
	}
	while(k>n);
}
int Gt(int n)
{
	if(n==0)
	   return 1;
	return Gt(n-1)*n;
}
int Combination(int n, int k)
{
	return  Gt(n) / (Gt(k)*Gt(n - k));
}
void OutPut(int n)
{
	printf("nCk = %d",n);
}
