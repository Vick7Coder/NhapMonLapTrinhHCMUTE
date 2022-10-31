#include<stdio.h>
#include<math.h>
void InPut(int &n, int A[]);
int LaSNT(int n);
int LaSHH(int n);
int CheckNTHH(int n, int A[]);
void OutPut(int n);
int main()
{
	int n,A[100];
	InPut(n,A);
	int Rs = CheckNTHH(n,A);
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
int LaSNT(int n)
{
	int dem=0;
	if(n<2)
	   return 0;
	for(int i=2;i<=sqrt(n);i++)
	{
		if(n%i==0)
		   dem++;
	}
	if(dem==0)
	   return 1;
	return 0;
}
int LaSHH(int n)
{
	int s=0;
	for(int i=1;i<n;i++)
	{
		if(n%i==0)
		   s+=i;
	}
	if(s==n)
	   return 1;
	return 0;
}
int CheckNTHH(int n, int A[])
{
	int demSNT=0;
	int demSHH=0;
	for(int i=0;i<n;i++)
	{
		if(LaSNT(A[i])==1)
		   demSNT++;
		if(LaSHH(A[i])==1)
		   demSHH++;
	}
	if(demSNT==demSHH)
	   return 1;
	return 0;
}
void OutPut(int n)
{
	printf("So luong so nguyen to va so hoan hao trong mang co bang nhau hay khong?\n");
	if(n==1)
	   printf("Co");
	else
	   printf("Khong");
}
