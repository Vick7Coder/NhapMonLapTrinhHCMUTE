#include<stdio.h>
void InPut(int A[], int &n);
void OutPut(int A[], int m, int n);
void SendLongArrYang(int A[], int n);
int main()
{
	int A[100],n;
	InPut(A,n);
    SendLongArrYang(A,n);
    return 0;
}
void InPut(int A[], int &n)
{
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	   scanf("%d",&A[i]);
}
void OutPut(int A[], int m, int n)
{
	for(int i=m;i<n;i++)
	   printf("%d\t",A[i]);
	printf("\n");
}
void SendLongArrYang(int A[], int n)
{
    int first=-1,last=-1;
    int max = 0;
    int start = 0;int end = 0;
    
    while( last < n)
    {
        int count = 0;
        first = last;
        int i;
        for(i = first+1; i < n; i++)
        {
            if(A[i] <= 0)
                break;
            if(A[i] > 0)
                count++;
        }
        last = i;
        if(max < count)
        {
            max = count;
            start = first+1;
            end = last;
                
        }
    }
    OutPut(A,start,end);
}
