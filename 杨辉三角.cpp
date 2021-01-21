#include <stdio.h>
#define N 10
int Fact(int n)
{
    int i;
    int sum=1;
    for(i=2;i<=n;i++)
    {
        sum*=i;
    }
    return sum;
}
void Print(int arr[][N])
{
	int result;
	int i,j;
	for(i=0;i<N;i++)
	{
		for(j=0;j<=i;j++)
		{
			result=Fact(i)/((Fact(i-j))*Fact(j));
			printf("%-5d",result);
		}
		printf("\n");
	}
}
int main()
{
    int arr[N][N];
	Print(arr);
    return 0;
} 
