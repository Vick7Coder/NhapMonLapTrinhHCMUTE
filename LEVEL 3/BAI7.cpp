#include<stdio.h>
void InPut(int &n);
int SumNum(int n);
void OutPut(int n);
int main()
{
	 int n;
	 InPut(n);
	 int Result = SumNum(n);
	 OutPut(Result);
	 return 0;
}
void InPut(int &n)
{
	printf("vui long nhap n: ");
	scanf("%d",&n);
}
int SumNum(int n)
{
	int s = 0;
	for(int i=n;n!=0;n/=10)
	{
		int r = n%10;
		s=s+r;
	}
	return s;
}
void OutPut(int n)
{
	printf("tong cac chu so cua n la: %d",n);
}
