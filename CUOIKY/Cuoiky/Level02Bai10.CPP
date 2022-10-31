#include<stdio.h>
void InPut(int &h, int &m, int &s);
void BackASecond(int &h, int &m, int &s);
void OutPut(int h, int m, int s);
int main()
{
	int h,m,s;
	InPut(h,m,s);
	BackASecond(h,m,s);
	OutPut(h,m,s);
	return 0;
}
void InPut(int &h, int &m, int &s)
{
	do
	{
		printf("vui long nhap gio: ");
		scanf("%d",&h);
		printf("vui long nhap phut: ");
		scanf("%d",&m);
		printf("vui long nhap giay: ");
		scanf("%d",&s);
		if((h<0)||(h>=24)||(m<0)||(m>=60)||(h<0)||(h>=60))
		   printf("Khong hop le, nhap lai!!! \n");
	}
	while((h<0)||(h>=24)||(m<0)||(m>=60)||(h<0)||(h>=60));
}
void BackASecond(int &h, int &m, int &s)
{
	if(s<59)
	  s++;
	else
	{
		s=0;
		if(m==59)
		{
			m=0;
			if(h==23)
			{
				h=0;
			}
			else
			   h++;
		}
		else
		   m++;
	}
}
void OutPut(int h, int m, int s)
{
	printf("sau 1 giay: %d - %d - %d",h,m,s);
}
