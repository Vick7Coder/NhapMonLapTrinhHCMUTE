#include<stdio.h>
#include<string.h>
void InPut(char A[], int &n, int &pos);
void TrichNPos(char A[], int n, int pos, char B[]);
void TrichNCuoi(char A[], int n, char B[]);
int main()
{
	char A[100],B[100],C[100],D[100];
	int n,p;
	InPut(A,n,p);
	TrichNPos(A,n,p,D);
	puts(D);
	strncpy(B,A,n);
	puts(B);
	TrichNCuoi(A,n,C);
	puts(C);
	return 0;
}
void InPut(char A[], int &n, int &pos)
{
	gets(A);
	printf("n= ");
	scanf("%d",&n);
	printf("pos= ");
	scanf("%d",&pos);
}
void TrichNPos(char A[], int n, int pos, char B[])
{
	int nB=0;
	int m=pos+n-1;
	if(n>strlen(A))
	{
		m=strlen(A);
	}
	for(int i=pos-1;i<m;i++)
	{
		B[nB++]=A[i];
	}
}
void TrichNCuoi(char A[], int n, char B[])
{
	strrev(A);
	strncpy(B,A,n);
	strrev(B);
}
