#include<stdio.h>
void nhap(int &a, int &b);
int sum(int a, int b);
void xuat(int x);
int main()
{
	int a,b;
	nhap(a,b);
	int kq = sum(a,b);
	xuat (kq);
	return 0;
}
void nhap(int &a, int &b)
{
	printf("vui long nhap so nguyen a: ");
	scanf("%d",&a);
	printf("vui long nhap so nguyen b: ");
	scanf("%d",&b);
}
int sum(int a, int b)
{
	int sum;
	sum = a+b;
	return sum;
}
void xuat(int x)
{
	printf("tong hai so a va b la: %d ",x);
	
}
