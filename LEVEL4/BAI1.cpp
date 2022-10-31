#include<stdio.h>
#include<math.h>
void InPut(int &n);
int CheckSquare(int n);
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
int CheckSquare(int n)
{
	float s=sqrt(n);
	if(s==(int)s)
	   return 1;
	return 0;
}
void OutPut(int n)
{
	if(CheckSquare(n)==1)
	   printf("%d la so chinh phuong",n);
	else
	   printf("%d khong phai so chinh phuong",n);
	
}
