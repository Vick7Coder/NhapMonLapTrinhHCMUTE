#include<stdio.h>
#include<math.h>
void InPut(int &n);
int CheckSNT(int n);
int CheckNT(int n);
void OutPut(int n);
int main()
{
	int n;
	InPut(n);
	int Rs = CheckSNT(n);
	OutPut(Rs);
	return 0;
}
void InPut(int &n)
{
	printf("vui long nhap n: ");
	scanf("%d",&n);
}
int CheckSNT(int n)
{
	int dem = 0;
	for(int i=n;i!=0;i/=10)
	{
		int r = i%10;
		if(CheckNT(r)==1)
		   dem++;
	}
	return dem;
}
void OutPut(int n)
{
	printf("so chu so la so nguyen to la: %d",n);
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
