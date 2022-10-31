#include<stdio.h>
#include<string.h>
int Check(char A[], char B[]);
int main()
{
	char A[100];
	gets(A);
	char B[100];
	gets(B);
	Check(A,B);
	return 0;
		
}
int Check(char A[], char B[])
{
	if(strstr(A,B)==0)
		printf("chuoi 2 khong phai con chuoi 1\n");
	else
	   printf("chuoi 2 la con chuoi 1\n");
	if(strstr(B,A)==0)
	   printf("chuoi 1 khong phai con chuoi 2\n");
	else
	    printf("chuoi 2 la con chuoi 1\n");
	    
	
}
