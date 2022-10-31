#include<stdio.h>
#include<string.h>
int SumNum(char A[]);
void OutPut(int n);
int main()
{
	char A[100];
	gets(A);
	int Rs = SumNum(A);
	OutPut(Rs);
	return 0;
}
int SumNum(char A[])
{
	int s = 0;
	for(int i=0;i<strlen(A);i++)
	{
		if(A[i]>'0'&&A[i]<='9')
		   s+=(A[i]-'0');
	}
	return s;
}
void OutPut(int n)
{
	printf("%d",n);
}

