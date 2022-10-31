#include<stdio.h>
void InPut(int &a, int &b, int &c);
int CheckTriangle(int a, int b, int c);
void OutPut(int n);
int main()
{
	int a,b,c;
	InPut(a,b,c);
	int Rs = CheckTriangle(a,b,c);
	OutPut(Rs);
	return 0;
}
void InPut(int &a, int &b, int &c)
{
	printf("vui long nhap a: ");
	scanf("%d",&a);
	printf("vui long nhap b: ");
	scanf("%d",&b);
	printf("vui long nhap c: ");
	scanf("%d",&c);
}
int CheckTriangle(int a, int b, int c)
{
	if((a>=b+c)&&(b>=a+c)&&(c>=a+b))
	   return 0;
	else
	{
		if((a*a==b*b+c*c)||(b*b==a*a+c*c)||(c*c==a*a+b*b))
		   return 1;
		else if((a==b)&&(b==c))
		   return -1;
		else if((a==b)||(b==c)||(a==c))
		{
			if((a*a==b*b+c*c)||(b*b==a*a+c*c)||(c*c==a*a+b*b))
			   return 2;
			else
			   return -2;
		}
		else 
		   return 3;
	}
}
void OutPut(int n)
{
	if(n==0)
	  printf("a,b,c khong tao thanh mot tam giac");
	else if(n==1)
	  printf("a,b,c tao thanh tam giac vuong");
	else if(n== -1)
	   printf("a,b,c tao thanh tam giac deu");
	else if(n==2)
	   printf("a,b,c tao thanh tam giac vuong can");
	else if(n== -2)
	   printf("a,b,c tao thanh tam giac can");
	else if(n==3)
	   printf("a,b,c tao thanh tam giac thuong");
}
