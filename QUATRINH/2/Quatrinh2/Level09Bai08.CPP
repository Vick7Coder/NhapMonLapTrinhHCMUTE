#include<stdio.h>
void InPut(int &n, int A[]);
void TanSuat(int n, int A[]);
void OutPut(int n, int m);
int main()
{
	int n, A[100];
	InPut(n,A);
	TanSuat(n,A);
	return 0;
}
void InPut(int &n, int A[])
{
	do
	{
		printf("n= ");
		scanf("%d",&n);
		if(n<=0)
		   printf("!!!n>0\n");
	}
	while(n<=0);
	for(int i=0;i<n;i++)
	{
		printf("A[%d]=",i);
		scanf("%d",&A[i]);
	}
}
void TanSuat(int n, int A[])
{
	for(int i=0;i<n;i++)
	{
		int dem=0;
		for(int j = 0; j < n; j++) 
        {
            if(A[i] == A[j])
            {
                if(i <= j)         
                {
                    dem++;    
                }
                else
                {
                    break;
                }
            }
        }
        if(dem!=0)
           OutPut(A[i],dem);
        
	}
}
void OutPut(int n, int m)
{
	printf(" %d=%d ",n,m);
}
