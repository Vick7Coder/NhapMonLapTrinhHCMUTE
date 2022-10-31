#include<stdio.h>
void InPut(int &n);
int CheckDoiXung(int n);
void OutPut(int n);
int main()
{
	int n;
	InPut(n);
	OutPut(n);
	return 0;
}
void InPut(int &n)
{
	printf("vui long nhap n: ");
	scanf("%d",&n);
}
int CheckDoiXung(int n)
{
	int s = 0;
	for(int i=n;i!=0;i/=10)
	{
		int r = i%10;
		s = s*10 + r;
	}
	if(s==n)
	   return 1;
	return 0;
}
void OutPut(int n)
{
	if(CheckDoiXung(n)==1)
	   printf("%d la so doi xung",n);
	else
	   printf("%d khong phai so doi xung",n);
}
