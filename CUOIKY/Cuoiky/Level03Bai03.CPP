#include<stdio.h>
void InPut(int &n);
float Sum(int n);
void OutPut(float n);
int main()
{
	int n;
	InPut(n);
	float Result = Sum(n);
	OutPut(Result);
	return 0;
}
void InPut(int &n)
{
	printf("vui long nhap n: ");
	scanf("%d",&n);
}
float Sum(int n)
{
	float s = 0;
	for(int i = 1; i<=n; i++)
	{
		s+=1/(float)i;
	}
	return s;
}
void OutPut(float n)
{
	printf("tong n la: %.2f",n);
}
