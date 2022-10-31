#include<stdio.h>
#include<math.h>
void InPut(int &a, int &b);
int UCLN(int a, int b);
void OutPut(int n);
int main()
{
	int a,b;
	InPut(a,b);
	int Result = UCLN(a,b);
	OutPut(Result);
	return 0;
}
void InPut(int &a, int &b)
{
	printf("vui long nhap so a: ");
	scanf("%d",&a);
	printf("vui long nhap so b: ");
	scanf("%d",&b);
	
}
int UCLN(int a, int b)
{
	a = abs(a);
	b = abs(b);
	while(a!=b)
	{
		if(a>b)
		   a = a - b;
		else if(b>a)
		   b = b - a;
	}
	return a;
}
void OutPut(int n)
{
	printf("uoc chung lon nhat: %d",n);
}
