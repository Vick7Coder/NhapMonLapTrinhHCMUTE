#include<stdio.h>
#include<string.h>
void InPut(char A[]);
int DemTu(char A[]);
void OutPut(int n);
int main()
{
	char A[100];
	InPut(A);
	int Rs = DemTu(A);
	OutPut(Rs);
	return 0;
}
void InPut(char A[])
{
	gets(A);
}
int DemTu(char A[])
{
	int dem;
	if(A[0]==' ')
	   dem=0;
	else
	   dem=1;
	for(int i=0;i<strlen(A)-1;i++)
	{
		if(A[i]==' '&&A[i+1]!=' ')
		   dem++;
	}
	return dem;
}
void OutPut(int n)
{
	printf("%d",n);
}
