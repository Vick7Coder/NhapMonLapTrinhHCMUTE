#include<stdio.h>
#include<math.h>
void InPut(float &n);
void OutPut(int m);
int main()
{
	float n;
	InPut(n);
	int Result = round(n);
	OutPut(Result);
	return 0;
}
void InPut(float &n)
{
	printf("vui long nhap 1 so thuc: ");
	scanf("%f",&n);
}
void OutPut(int m)
{
	printf("lam tron thanh: %d",m);
}
