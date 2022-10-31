#include<stdio.h>
#include<math.h>
void nhap(int &n);
void NhiPhan(int n);
void BatPhan(int n);
void ThapLucPhan(int n);
void OutPut(int n);
int main()
{
	int n;
	nhap(n);
	NhiPhan(n);
	printf("\n");
	BatPhan(n);
	printf("\n");
	ThapLucPhan(n);
	return 0;
}
void nhap(int &n)
{
	printf("nhap so can chuyen: ");
	scanf("%d",&n);
}
void NhiPhan(int n)
{
	int A[20],nA=0;
	for(int i=0;n>0;i++)
	{
		A[nA++] = n%2;
		n=n/2;
	}
	for(int i=nA-1;i>=0;i--)
	{
		OutPut(A[i]);
	}
}
void BatPhan(int n)
{
	int A[20],nA=0;
	for(int i=0;n>0;i++)
	{
		A[nA++] = n%8;
		n=n/8;
	}
	for(int i=nA-1;i>=0;i--)
	{
		OutPut(A[i]);
	}
}
void ThapLucPhan(int n)
{
	int A[20],nA=0;
	for(int i=0;n>0;i++)
	{
		A[nA++] = n%16;
		n=n/16;
	}
	for(int i=nA-1;i>=0;i--)
	{
		if (A[i]<10)
		   OutPut(A[i]);
		else
		switch (A[i])
                       {
						case 10: printf("A");
						  break;
                        case 11: printf("B");
							break;
                        case 12: printf("C");
							break;
                        case 13: printf("D");
							break;
                        case 14: printf("E");
							break;
                        case 15: printf("F");
							break;
                        }
	}
}
void OutPut(int n)
{
	printf("%d",n);
}
