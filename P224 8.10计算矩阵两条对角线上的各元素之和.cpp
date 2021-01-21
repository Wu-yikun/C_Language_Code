#include <stdio.h>
#define N 10
int Jz(int arr[][N],int n)
{
    int i,j,sum=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
            if(i==j||i+j==n-1)
            {
                sum+=arr[i][j];
            }
        }
    }
    return sum;
}
int main()
{
    int arr[N][N];
    int n,sum;
    printf("Input n:");
    scanf("%d",&n);
    printf("Please enter %d x %d 矩阵：\n",n,n);
    sum=Jz(arr,n);
    printf("对角线上元素之和为%d",sum);
    return 0;
}
