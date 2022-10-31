#include<stdio.h>
void InPut(int &n);
int NumDevisor(int n);
void OutPut(int n);
int main()
{
	int n;
	InPut(n);
	int Rs = NumDevisor(n);
	OutPut(Rs);
	return 0;
	
}
void InPut(int &n)
{
	do
	{
	printf("vui long nhap n: ");
	scanf("%d",&n);
	if(n<=0)
	   printf("vui long nhap n>0!! \n");
    }
    while(n<=0);
}
int NumDevisor(int n)
{
	int max = 1;
	for(int i=1; i<n; i++)
	{
		if((n%i==0)&&(i%2!=0))
		{
			if(i>max)
			   max=i;
		}
	}
	return max;
}
void OutPut(int n)
{
	printf("co %d LA UOC SO LE LON NHAT",n);
}
