#include<stdio.h>
void InPut(int &n);
int CheckMax(int n);
void OutPut(int n);
int main()
{
	int n;
	InPut(n);
	int Rs = CheckMax(n);
	OutPut(Rs);
	return 0;
}
void InPut(int &n)
{
	printf("vui long nhap n: ");
	scanf("%d",&n);
}
int CheckMax(int n)
{
	int max = 0;
	for(int i=n;i!=0;i/=10)
	{
		int r = i%10;
		if(r>max)
		   max = r;
	}
	return max;
}
void OutPut(int n)
{
	printf("chu so lon nhat la: %d",n);
}
