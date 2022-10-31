#include<stdio.h>
#include<string.h>
int HexToDec(char A[]);
void OutPut(int n);
int main()
{
	char A[100];
	gets(A);
	int Rs = HexToDec(A);
	OutPut(Rs);
	return 0;
	
}
int HexToDec(char A[])
{
	int s=0;
	for(int i=0;i<strlen(A);i++)
	{
		if(A[i]>='0' && A[i]<='9')
		   s=s*16+(A[i]-'0');
		else if(A[i]=='A')
            s=s*16+(10);
        else if(A[i]=='B')
            s=s*16+(11);
        else if(A[i]=='C')
            s=s*16+(12);
        else if(A[i]=='D')
            s=s*16+(13);
        else if(A[i]=='E')
            s=s*16+(14);
        else if(A[i]=='F')
            s=s*16+(15);
        else
            return -1;
	}
	return s;
}
void OutPut(int n)
{
	printf("%d",n);
}
