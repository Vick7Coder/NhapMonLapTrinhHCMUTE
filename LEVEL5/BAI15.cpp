#include<stdio.h>
#include<math.h>
void InPut(int &n, float &x);
float NthRoot(int n, float x);
void OutPut(float n);
int main()
{
	int n;
	float x;
	InPut(n,x);
	float Rs = NthRoot(n,x);
	OutPut(Rs);
	return 0;
}
void InPut(int &n, float &x)
{
	do
	{
		printf("vui long nhap n: ");
		scanf("%d",&n);
		printf("vui long nhap x: ");
		scanf("%f",&x);
		if(x<=0)
		{
			printf("vui long nhap x>n!!!\n");
		}
	}
	while(x<=0);
}
float NthRoot(int n, float x)
{
	float S = sqrt(x);
    for(int i = 2; i <= n; i++)
    {
        S = sqrt(x + S);
    }
    return S;
}
void OutPut(float n)
{
	printf("tong n can cua x la: %f",n);
}
