#include<stdio.h>
#include<string.h>
void DeleteWhiteSpace(char A[]);
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
	   strcpy(&A[0],&A[1]);

	for(int i=0; i<n-1; i++)
	  if(A[i] == ' ' && A[i+1] == ' ') 	
       {
       	    strcpy(&A[i],&A[i+1]);
    	    i--;
	   }
	   
	while(A[n-1]==' ')
	   strcpy(&A[n-1],&A[n]);
	
}
