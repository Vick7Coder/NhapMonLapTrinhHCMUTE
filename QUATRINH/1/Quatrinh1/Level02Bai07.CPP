#include<stdio.h>
#include<math.h>
void InPut(float &a, float &b, float &c);
int Solution(float a, float b, float c, float &x1, float &x2);
void OutPut(float a, float b, float c, float x1, float x2);
int main()
{
	float a,b,c;
	float x1,x2;
	InPut(a,b,c);
	Solution(a,b,c,x1,x2);
	OutPut(a,b,c,x1,x2);
	return 0;
}
void InPut(float &a, float &b, float &c)
{
	printf("vui long nhap a: ");
	scanf("%f",&a);
	printf("vui long nhap b: ");
	scanf("%f",&b);
	printf("vui long nhap c: ");
	scanf("%f",&c);
}
int Solution(float a, float b, float c, float &x1, float &x2)
{
	if(a!=0)
	{
		float delta = b*b-4*a*c;
		if(delta==0)
	    {
	    	x1 = x2 = -b/2*a;
	        return 1;
		}
	    else
	    {
	    	if(delta<0)
	    	   return 0;
	    	else if(delta>0)
	    	{
	    		x1 = (-b+sqrt(delta))/(2*a);
	    		x2 = (-b-sqrt(delta))/(2*a);
	    		return -1;
			}
		}
	}
	else
	{
		if(b==0)
		{
			if(c==0)
			   return 2;
			else
			   return 0;
		}
		else
		{
			x1 = -c/b;
			return -2;
		}
	}
}
void OutPut(float a, float b, float c, float x1, float x2)

{
	if(Solution(a,b,c,x1,x2)==1)
	   printf("phuong trinh co nghiem kep %.2f",x1);
	else if(Solution(a,b,c,x1,x2)==0)
	   printf("phuong trinh vo nghiem");
	else if(Solution(a,b,c,x1,x2)== -1)
	   printf("phuong trinh o 2 nghiem phan biet x1 = %.2f va x2 = %.2f",x1,x2);
	else if(Solution(a,b,c,x1,x2)==2)
	   printf("phuong trinh co vo so nghiem");
	else if(Solution(a,b,c,x1,x2)==-2)
	   printf("phuong trinh co nghiem bac nhat x = %.2f",x1);
}
