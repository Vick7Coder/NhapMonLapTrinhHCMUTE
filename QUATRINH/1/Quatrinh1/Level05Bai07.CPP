#include<stdio.h>
#include<math.h>
void InPut(int &n);
int checkNT(int n);
int NumDevisor(int n);
void OutPut(int n);
int main()
{
	int n;
	InPut(n);
	int Rs = NumDevisor(n);
	OutPut(Rs);
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
int NumDevisor(int n)
{
	int dem = 0;
	for(int i=1; i<n; i++)
	{
		if((n%i==0)&&(checkNT(i)==1))
		   dem++;
	}
	return dem;
}
void OutPut(int n)
{
	printf("co %d uoc so la so nguyen to",n);
}
