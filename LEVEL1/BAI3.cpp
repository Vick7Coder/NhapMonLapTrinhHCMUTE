#include<stdio.h>
void InPut(float &a, float &b);
float Perimeter(float a, float b);
void OutPut(float Result);
int main()
{
	float a,b;
	InPut(a,b);
	float Result = Perimeter(a,b);
	OutPut(Result);
	return 0; 
}
void InPut(float &a, float &b)
{
	printf("vui long nhap chieu rong: ");
	scanf("%f",&a);
	printf("vui long nhap chieu dai: ");
	scanf("%f",&b);
}
float Perimeter(float a, float b)
{
	   float temp = (a+b)*2;
	   return temp;
}
void OutPut(float Result)
{
	printf("chu vi hinh chu nhat la: %.2f", Result);
}
