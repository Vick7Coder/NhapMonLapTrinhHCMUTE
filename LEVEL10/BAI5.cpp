#include<stdio.h>
#include<string.h>
void DeleteWhiteSpace(char A[]);
void Delete(char A[], int n);
int main()
{
	char A[100];
	fflush(stdin);
	gets(A);
	DeleteWhiteSpace(A);
	puts(A);
	return 0;
}
void DeleteWhiteSpace(char A[])
{
	int n = strlen(A);
	while(A[0]==' ') 
	   Delete(A,0);

	for(int i=0; i<n-1; i++)
	  if(A[i] == ' ' && A[i+1] == ' ') 	
       {
       	   Delete(A,i);
	   }
	   
	while(A[n-1]==' ')
	   Delete(A,n-1);
	
}
void Delete(char A[], int n)
{
	for(int i=n;i<strlen(A);i++)
	{
		A[i]=A[i+1];
	}
}
