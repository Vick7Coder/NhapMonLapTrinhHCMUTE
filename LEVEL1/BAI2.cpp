#include<stdio.h>
#include<math.h>
void nhap(int &n);
void xuat(int x);
int main()
{
	int n;
	nhap(n);
	int kq = abs(n);
	xuat(kq);
	return 0;	
}
void nhap(int &n)
{
	printf("vui long nhap n: ");
	scanf("%d",&n);
}
void xuat(int x)
{
	printf("gia tri tuyet doi cua n la: %d",x);
}
