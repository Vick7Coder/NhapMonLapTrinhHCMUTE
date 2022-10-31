#include<stdio.h>
void InPut(int &n);
void OutPut(int n);
int main()
{
	int n;
	InPut(n);
	OutPut(n);
	return 0;
}
void InPut(int &n)
{
	printf("vui long nhap so: ");
	scanf("%d",&n);
}
void OutPut(int n)
{
	if(n==0)
	   printf("khong");
	else if(n==1)
	   printf("mot");
	else if(n==2)
	   printf("hai");
	else if(n==3)
	   printf("ba");
	else if(n==4)
	   printf("bon");
	else if(n==5)
	   printf("nam");
	else if(n==6)
	   printf("sau");
	else if(n==7)
	   printf("bay");
	else if(n==8)
	   printf("tam");
	else if(n==9)
	   printf("chin");
	else
	   printf("khong doc duoc");
	
}
