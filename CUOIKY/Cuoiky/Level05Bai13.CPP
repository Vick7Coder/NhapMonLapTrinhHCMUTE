#include<stdio.h>
#include<math.h>
void InPut(int &n, float &x);
int Gt(int n);
float Sum(float x, int n);
void OutPut(float n);
int main()
{
	int n;
	float x;
	InPut(n,x);
	float Rs = Sum(x,n);
	OutPut(Rs);
	return 0;
}
void InPut(int &n, float &x)
{
	do
	{
		printf("vui long nhap n: ");
		scanf("%d",&n);
		printf("vui long nhap x: ");
		scanf("%f",&x);
		if(n<=0)
		   printf("vui long nhap n>0\n");
	}
	while(n<=0);
}
int Gt(int n)
{
	if(n==0)
	   return 1;
	return Gt(n-1)*n;
}
float Sum(float x, int n)
{
	if(n==1)
	   return 1+((pow(x,n))/Gt(n));
	else
	   return Sum(x,n-1)+((pow(x,n))/Gt(n));
}
void OutPut(float n)
{
	printf("tong la: %.2f",n);
}
