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
	return(s==(int)s);
}
void OutPut(int n)
{
	if(CheckSquare(n))
	   printf("%d la so chinh phuong",n);
	else
	   printf("%d khong phai so chinh phuong",n);
	
}
