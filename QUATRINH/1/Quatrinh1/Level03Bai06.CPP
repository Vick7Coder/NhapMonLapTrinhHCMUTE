#include<stdio.h>
void InPut(int &n);
int NumDevisor(int n);
void OutPut(int n);
int main()
{
	int n;
	InPut(n);
	int Result = NumDevisor(n);
	OutPut(Result);
	return 0;
}
void InPut(int &n)
{
	printf("vui long nhap n: ");
	scanf("%d",&n);
}
int NumDevisor(int n)
{
	int dem = 0;
	for(int i=1; i<=n; i++)
	{
		if(n%i==0)
		   dem++;
	}
	return dem;
}
void OutPut(int n)
{
	printf("so uoc so cua n la: %d",n);
}
