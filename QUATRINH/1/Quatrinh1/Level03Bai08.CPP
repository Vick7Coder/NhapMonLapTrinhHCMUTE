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
	for(int i=n;i!=0;i/=10)
	{
		int r = i%10;
		s=s*10+r;
	}
	return s;
}
void OutPut(int n)
{
	printf("So nguoc lai la: %d",n);
}
