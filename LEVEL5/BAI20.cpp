#include<stdio.h>
#include<math.h>
void InPut(int &n);
int checkNT(int n);
void NumDevisor(int n);
void OutPut(int n);
int main()
{
	int n;
	InPut(n);
	NumDevisor(n);
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
int checkNT(int n)
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
void NumDevisor(int n)
{
	for(int i=1; i<n; i++)
	{
		if((n%i==0)&&(checkNT(i)==1))
		   OutPut(i);
	}
}
void OutPut(int n)
{
	printf("%d ",n);
}
