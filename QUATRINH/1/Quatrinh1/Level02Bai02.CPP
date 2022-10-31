#include<stdio.h>
void InPut(int &a, int &b);
int Solution(int a, int b, float &dev);
void OutPut(int b, float x);
int main()
{
	int a,b;
	float dev;
	InPut(a,b);
	float Result = Solution(a,b,dev);
	OutPut(Result,dev);
	return 0;
}
void InPut(int &a, int &b)
{
	printf("vui long nhap he so a: ");
	scanf("%d",&a);
	printf("vui long nhap he so b: ");
	scanf("%d",&b);
}
int Solution(int a, int b, float &dev)
{
	if(a!=0)
	    {
	   	dev = -b/(float)a;
	    return 1;
	   }
	else
	   if(b==0)
	      return 0;
	    else
	       return -1;
	  
}
void OutPut(int b, float x)
{
	if(b==0)
	   printf("Phuong trinh co vo so nghiem!!!");
	else if(b==-1)
	   printf("Phuong trinh vo nghiem!!!");
	else
	   printf("Phuong trinh co nghiem duy nhat la: %.2f",x);
}
