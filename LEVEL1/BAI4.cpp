#include<stdio.h>
void InPut(int &a, int &b);
int FindMax(int a, int b);
void OutPut(int R);
int main()
{
	int a,b;
	InPut(a,b);
	int Result = FindMax(a,b);
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
int FindMax(int a, int b)
{
	int Max=a;
	if(a<b)
	{
	   Max=b;
    }
    return Max;
}
void OutPut(int R)
{
	printf("so lon nhat la: %d",R);
}
