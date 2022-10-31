#include<stdio.h>
void OutPut(int Tr, int Na, int Ha, int Mu);
void InPut(int &n);
int ChiaTien(int n, int &Tr, int &Na, int &Ha, int &Mu);
int main()
{
	int n,Tr,Na,Ha,Mu;
	InPut(n);
	ChiaTien(n,Tr,Na,Ha,Mu);
	OutPut(Tr,Na,Ha,Mu);
	return 0;
}
void InPut(int &n)
{
	do
	{
	   printf("vui long nhap so tien can rut: \n");
	   scanf("%d",&n);
	   if(n%10000!=0)
	      printf("so tien rut phai la co so cua 10.000VND\n");
	}
	while(n%10000!=0);
}
int ChiaTien(int n, int &Tr, int &Na, int &Ha, int &Mu)
{
	Tr = n/100000;
	n=n%100000;
	
	Na = n/50000;
	n=n%50000;
	
	Ha = n/20000;
	n=n%20000;
	
	Mu = n/10000;
}
void OutPut(int Tr, int Na, int Ha, int Mu)
{
	printf("so luong cac loai tien ban se nhan duoc la: \n");
	printf("%d x 100.000 VND\n",Tr);
	printf("%d x 50.000 VND\n",Na);
	printf("%d x 20.000 VND\n",Ha);
	printf("%d x 10.000 VND\n",Mu);
	
}
