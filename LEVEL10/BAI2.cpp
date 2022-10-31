#include<stdio.h>
#include<math.h>
void nhap(int &n);
void NhiPhan(int n);
void BatPhan(int n);
void ThapLucPhan(int n);
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
	int i,A[10];
	for(i=0;n>0;i++)
	{
		A[i] = n%2;
		n=n/2;
	}
	for(i=i-1;i>=0;i--)
	{
		printf("%d",A[i]);
	}
}
void BatPhan(int n)
{
	int i,A[10];
	for(i=0;n>0;i++)
	{
		A[i] = n%8;
		n=n/8;
	}
	for(i=i-1;i>=0;i--)
	{
		printf("%d",A[i]);
	}
}
void ThapLucPhan(int n)
{
	int i,A[10];
	for(i=0;n>0;i++)
	{
		A[i] = n%16;
		n=n/16;
	}
	for(i=i-1;i>=0;i--)
	{
		if (A[i]<10)
		   printf("%d",A[i]);
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
