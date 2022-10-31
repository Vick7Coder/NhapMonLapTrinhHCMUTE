#include<stdio.h>
#include<string.h>
void InHoa(char A[]);
int main()
{
	char A[100];
	gets(A);
	InHoa(A);
	puts(A);
	return 0;
}
void InHoa(char A[])
{
	int n=strlen(A);
	for(int i=0;i<n;i++)
	{
		if(A[i]==' ' || i+1==0)
		{
			if(A[i+1]>='a' && A[i+1]<='z')
			A[i+1]-=32;
		}
	}
	if(A[0]>='a' && A[0]<='z')
	{
		A[0]-=32;
	}
}
