#include<stdio.h>
#include<math.h>
void InPut(int &n);
int CheckNT(int n);
int OutNT(int n);
void OutPut(int n);
int main()
{
	int n;
	InPut(n);
	int Rs = OutNT(n);
	OutPut(Rs);
	return 0;
}
void InPut(int &n)
{
	do
	{
	printf("\n vui long nhap n: ");
	scanf("%d",&n);
	if(n<=0)
	   printf("vui long nhap n>0!!");
    }
    while(n<=0);
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
int OutNT(int n)
{
	int dem=0;
	for(int i=1;i<n;i++)
	{
		if(CheckNT(i)==1)
		   dem++;
	}
	return dem;
}
void OutPut(int n)
{
	printf("so luong so hoan hao nho hon n la: %d",n);
}
