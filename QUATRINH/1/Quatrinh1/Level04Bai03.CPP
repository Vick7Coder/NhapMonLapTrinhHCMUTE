#include<stdio.h>
void InPut(int &n);
int CheckHH(int n);
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
int CheckHH(int n)
{
	int s = 0;
	for(int i=1;i<n;i++)
	{
		if(n%i==0)
		   s+=i;
	}
	return(s==n);
}
void OutPut(int n)
{
	if(CheckHH(n))
	   printf("%d la so hoan hao",n);
	else
	   printf("%d khong phai la so hoan hao",n);
	
}
