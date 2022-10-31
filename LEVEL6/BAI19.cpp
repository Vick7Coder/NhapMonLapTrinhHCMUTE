#include<stdio.h>
void InPut(int &n, float A[], float &x, float &y);
void CheckKhoang(int n, float A[], float x, float y);
void OutPut(float n);
int main()
{
	int n;
	float A[100],x,y;
	InPut(n,A,x,y);
	CheckKhoang(n,A,x,y);
	return 0;
}
void InPut(int &n, float A[], float &x, float &y)
{
	printf("vui long nhap so phan tu mang: ");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		printf("vui long nhap A[%d]=",i);
		scanf("%f",&A[i]);
	}
	printf("vui long nhap x: ");
	scanf("%f",&x);
	printf("vui long nhap y: ");
	scanf("%f",&y);
}
void CheckKhoang(int n, float A[], float x, float y)
{
	for(int i=0;i<n;i++)
	{
		if((A[i]>=x)&&(A[i]<=y))
		   OutPut(A[i]);
	}
}
void OutPut(float n)
{
	printf("%f  ",n);
}
