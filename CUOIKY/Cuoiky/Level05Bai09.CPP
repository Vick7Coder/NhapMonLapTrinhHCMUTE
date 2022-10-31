#include<stdio.h>
#include<math.h>
struct phanso
{
	int tu;
	int mau;
};
typedef struct phanso PHANSO;
void InPut(PHANSO &x);
void OutPut(PHANSO x);
PHANSO rutgon(PHANSO &x);
int ucln(int a,int b);
PHANSO tong(PHANSO x, PHANSO y);
int main()
{
	PHANSO a,b;
	InPut(a);
	OutPut(a);
	InPut(b);
	OutPut(b);
	PHANSO tog = tong(a,b);
	rutgon(tog);
	printf("\ntong 2 phan so la: ");
	OutPut(tog);
	return 0;
}
void InPut(PHANSO &x)
{
	printf("\nvui long nhap tu so: ");
	scanf("%d",&x.tu);
	printf("vui long nhap mau so: ");
	scanf("%d",&x.mau);
}
void OutPut(PHANSO x)
{
	printf("\n%d/%d\n",x.tu,x.mau);
}
PHANSO rutgon(PHANSO &x)
{
	int kq=ucln(x.tu,x.mau);
	x.tu=x.tu/kq;
	x.mau=x.mau/kq;
	return x;
}
int ucln(int a,int b)
{
	a=abs(a);
	b=abs(b);
	while(a!=b)
	{
		if (a>b)
			 a=a-b;
		else
			 b=b-a;
	}
	return a;
}
PHANSO tong(PHANSO x, PHANSO y)
{
	PHANSO temp;
	temp.mau=x.mau*y.mau;
	temp.tu=(x.tu*y.mau+y.tu*x.mau);
	return temp;
}
