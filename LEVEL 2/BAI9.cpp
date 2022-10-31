#include<stdio.h>
void InPut(int &a, int &b, int &c);
int Find(int a, int b, int c);
void OutPut(int x);
int main()
{
	int a,b,c;
	InPut(a,b,c);
	int Result = Find(a,b,c);
	OutPut(Result);
	return 0;
}
void InPut(int &a, int &b, int &c)
{
	do
	{
		printf("vui long nhap a: ");
		scanf("%d",&a);
		printf("vui long nhap b: ");
		scanf("%d",&b);
		printf("vui long nhap c: ");
		scanf("%d",&c);
		if((a==b)||(a==c)||(b==c))
		{
			printf("Trung nhau, vui long nhap lai!!! \n ");
		}
	}
	while((a==b)||(a==c)||(b==c));
}
int Find(int a, int b, int c)
{
	int max2 = a;
	if((a>b&&b>c)||(c>b&&b>a))
	   max2 = b;
	else if((a>c&&c>b)||(b>c&&c>a))
	   max2 = c;
	return max2;
}
void OutPut(int x)
{
	printf("so nho nhi trong 3 so la: %d",x);
}
