#include<stdio.h>
#include<math.h>
void InPut(int &n);
int CheckHH(int n);
void OutPut(int n);
int RsHH(int n);
int main()
{
	int n;
	InPut(n);
	RsHH(n);
	return 0;
}
void InPut(int &n)
{
	do
	{
	printf("vui long nhap n: ");
	scanf("%d",&n);
	if(n<=0)
	   printf("vui long nhap n>0!! \n");
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
void OutPut(int n)
{
	printf("%d ",n);
}
int RsHH(int n)
{
	for(int i=1;i<n;i++)
	{
		if(CheckHH(i)==1)
		   OutPut(i);
	}
}
