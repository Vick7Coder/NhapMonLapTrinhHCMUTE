#include<stdio.h>
void InPut(int &n);
int CheckHH(int n);
int OutHH(int n);
void OutPut(int n);
int main()
{
	int n;
	InPut(n);
	int Rs = OutHH(n);
	OutPut(Rs);
	return 0;
}
void InPut(int &n)
{
	do
	{
	printf("\n vui long nhap n: ");
	scanf("%d",&n);
	if(n<=0)
	   printf("vui long nhap n>0!!");
    }
    while(n<=0);
}
int CheckHH(int n)
{
	int s = 0;
	for(int i=1;i<n;i++)
	{
		if(n%i==0)
		   s+=i;
	}
	if(s==n)
	   return 1;
	return 0;
}
int OutHH(int n)
{
	int dem=0;
	for(int i=1;i<n;i++)
	{
		if(CheckHH(i)==1)
		   dem++;
	}
	return dem;
}
void OutPut(int n)
{
	printf("so luong so hoan hao nho hon n la: %d",n);
}
