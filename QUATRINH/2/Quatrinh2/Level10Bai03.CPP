#include<stdio.h>
#include<string.h>
void InPut(char A[]);
void Reserve(char A[]);
void OutPut(char A[]);
void Swap(char &x, char &y);
int main()
{
	char A[100];
	InPut(A);
	Reserve(A);
	OutPut(A);
	return 0;
}
void InPut(char A[])
{
	gets(A);
}
void Reserve(char A[])
{
	int n = strlen(A);
	for(int i=0;i<n/2;i++)
	{
		Swap(A[i],A[n-1-i]);
	}
}
void Swap(char &x, char &y)
{
	char temp =x;
	x=y;
	y=temp;
}
void OutPut(char A[])
{
	puts(A);
}
