#include<stdio.h>
void InPut(int &n);
int KiemTraTang(int n);
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
	printf("vui long nhap n: ");
	scanf("%d",&n);
}
int KiemTraTang(int n)
{
	int check = 1;
	int last = n%10;
	for(int i=n;n!=0;n/=10)
	{
		int nearlast=n%10;
		if(last<nearlast)
		{
			check = 0;
			break;
		}
	}
	return check;
}
void OutPut(int n)
{
	if(KiemTraTang(n)==1)
	   printf("so tang");
	else
	   printf("khong phai so tang");
}
