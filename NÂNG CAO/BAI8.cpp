#include<stdio.h>
void InPut(int A[], int &n);
void OutArr(int A[], int n);
int CheckChild(int A[], int m, int B[], int n);
void OutPut(int n);
int main()
{
	int A[100],n,B[100],m;
	InPut(A,m);
	OutArr(A,m);
	InPut(B,n);
	OutArr(B,n);
	int Rs = CheckChild(A,m,B,n);
	OutPut(Rs);
	return 0;
}
void InPut(int A[], int &n)
{
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	   scanf("%d",&A[i]);
}
void OutArr(int A[], int n)
{
	for(int i=0;i<n;i++)
	   printf("%d\t",A[i]);
	printf("\n");
}
int CheckChild(int A[], int m, int B[], int n)
{
	int flag=0;
	for(int i=0;i<n;i++)
	{
		if(B[i] == A[0])
		{
			int nB=i;
			flag=1;
			for(int j=0;j<m;j++)
			{
				if(A[j]!=B[nB++])
				   flag=0;
				   break;
			}
			if(flag==1)
			   return flag;
		}
	}
	return flag;
}
void OutPut(int n)
{
	if(n==1)
	   printf("mang A la con mang B");
	else
	   printf("mang A khong phai con mang B");
}
