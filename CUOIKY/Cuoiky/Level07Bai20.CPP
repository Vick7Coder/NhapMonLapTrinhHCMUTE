#include<stdio.h>
void InPut(int &n, float A[]);
int CheckDoiXung(int n, float A[]);
void OutPut(int n);
int main()
{
	int n;
	float A[100];
	InPut(n,A);
	int Rs = CheckDoiXung(n,A);
	OutPut(Rs);
	return 0;
}
void InPut(int &n, float A[])
{
	do
	{
		printf("n= ");
		scanf("%d",&n);
		if(n<=0)
		   printf("n>0\n");
	}
	while(n<=0);
	for(int i=0;i<n;i++)
	{
		printf("A[%d]=",i);
		scanf("%f",&A[i]);
	}
}
int CheckDoiXung(int n, float A[]) 
{
    int j=n-1;
    for(int i=0;i<n/2;i++) 
	{
        if(A[i]!=A[j])
           return 0;
        j--;
    }
    return 1;
}
void OutPut(int n)
{
    printf("Mang vua nhap co doi xung hay khong?\n");
    if(n==1)
       printf("Co");
    else
       printf("Khong");
}
