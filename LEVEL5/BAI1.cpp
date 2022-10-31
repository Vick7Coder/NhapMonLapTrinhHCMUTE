#include<stdio.h>
#include<math.h>
void InPut(int &n);
int CheckNT(int n);
void OutPut(int n);
int RsNT(int n);
int main()
{
	int n;
	InPut(n);
	RsNT(n);
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
int CheckNT(int n)
{
	int dem = 0;
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
void OutPut(int n)
{
	printf("%d ",n);
}
int RsNT(int n)
{
	for(int i=1;i<n;i++)
	{
		if(CheckNT(i)==1)
		   OutPut(i);
	}
}
