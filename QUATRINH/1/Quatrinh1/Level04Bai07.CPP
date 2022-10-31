#include<stdio.h>
void InPut(int &n);
int ChecChan(int n);
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
int ChecChan(int n)
{
    int check = 1;
	for(int i=n;n!=0;n/=10)
	{
		
        if((n % 10) % 2 == 1)
        {
            check = 0;
            break;
        }
	}
	return check;
}
void OutPut(int n)
{
	if(ChecChan(n))
	   printf("%d gom toan so chan",n);
	else
	   printf("%d khong gom toan so chan",n);
}
