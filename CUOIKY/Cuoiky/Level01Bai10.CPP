#include<stdio.h>
void InPut(float &a);
int Check(float a);
void OutPut(int a);
int main()
{
	float a;
	InPut(a);
	int Result = Check(a);
	OutPut(Result);
	return 0;
} 
void InPut(float &a)
{
	printf("vui long nhap so thuc: ");
	scanf("%f",&a);	
}
int Check(float a)
{
	if((a-(int)a!=0))
	{
	   a=(int)a;
	}
	else
	{
		a=a-1;
	}
	return a;
}
void OutPut(int a)
{
	printf("so nguyen nho hon so thuc a la : %d",a);
}
