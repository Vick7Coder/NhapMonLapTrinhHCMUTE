#include<stdio.h>
#include<math.h>
void InPut(int &n);
int CheckNT(int n);
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
	return(dem==0);
}
void OutPut(int n)
{
	if(CheckNT(n))
	   printf("%d la so nguyen to",n);
	else
	   printf("%d khong phai la so nguyen to",n);
}
