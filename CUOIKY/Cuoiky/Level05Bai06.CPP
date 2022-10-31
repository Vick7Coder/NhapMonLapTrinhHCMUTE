#include<stdio.h>
#include<math.h>
void InPut(int &n);
int CheckSq(int n);
int OutSq(int n);
void OutPut(int n);
int main()
{
	int n;
	InPut(n);
	int Rs = OutSq(n);
	OutPut(Rs);
	return 0;
}
void InPut(int &n)
{
	do
	{
	printf("\n vui long nhap n: ");
	scanf("%d",&n);
	if(n<=0)
	   printf("vui long nhap n>0!!");
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
int OutSq(int n)
{
	int dem=0;
	for(int i=1;i<n;i++)
	{
		if( CheckSquare(i)==1)
		   dem++;
	}
	return dem;
}
void OutPut(int n)
{
	printf("so luong so chinh phuong nho hon n la: %d",n);
}
