#include<stdio.h>
#include<string.h>
void InPut(char A[10]);
char Check(char A[10]);
void OutPut(char A[]);
int main()
{
	char A[10];
	InPut(A);
	Check(A);
	OutPut(A);
	return 0;
}
void InPut(char A[10])
{
	printf("vui long nhap chu can doi: ");
	gets(A);
}
char Check(char A[10])
{
	for(int i=0;i<strlen(A);i++)
	{
		if((A[i]>='A')&&(A[i]<='Z'))
		   A[i]=A[i]+32;
		else if((A[i]>='a')&&(A[i]<='z'))
		   A[i]=A[i]-32;
	}
}
void OutPut(char A[])
{
	printf("chu sau khi doi la: ");
	puts(A);
}
