#include<stdio.h>
#include<math.h>
void InPut(int &n);
int CheckSquare(int n);
void OutPut(int n);
int RsNT(int n);
int main()
{
	int n;
	InPut(n);
	RsNT(n);
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
int CheckSquare(int n)
{
	float s=sqrt(n);
	if(s==(int)s)
	   return 1;
	return 0;
}
void OutPut(int n)
{
	printf("%d ",n);
}
int RsNT(int n)
{
	for(int i=1;i<n;i++)
	{
		if(CheckSquare(i)==1)
		   OutPut(i);
	}
}
