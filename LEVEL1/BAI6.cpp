#include<stdio.h>
void InPut(int &hh, int &mm, int &ss);
int CheckTrue(int hh, int mm, int ss);
void OutPut(int hh, int mm, int ss);
int main()
{
	int hh,mm,ss;
	InPut(hh,mm,ss);
	CheckTrue(hh,mm,ss);
	OutPut(hh,mm,ss);
	return 0;
}
void InPut(int &hh, int &mm, int &ss)
{
	printf("vui long nhap h: ");
	scanf("%d",&hh);
	printf("vui log nhap m: ");
	scanf("%d",&mm);
	printf("vui long nhap s: ");
	scanf("%d",&ss);
}
int CheckTrue(int hh, int mm, int ss)
{
	if((hh>=0)&&(hh<24)&(mm>=0)&&(mm<60)&&(ss>=0)&&(ss<60))
	   return 1;
	return 0;
}
void OutPut(int hh, int mm, int ss)
{
	if(CheckTrue(hh,mm,ss)==1)
	   printf("%d:%d:%d la bo gio:phut:giay",hh,mm,ss);
	else
	   printf("%d,%d,%d khong la bo gio,phut,giay hop le",hh,mm,ss);
}
