#include <stdio.h>
#define N 10
#define M 10
void JZ(int arr[][N],int n,int m)
{
    int i,j;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
}
void jz(int brr[][N],int n,int m)
{
    int i,j;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&brr[i][j]);
        }
    }
}
void Print(int crr[][N],int arr[][N],int brr[][N],int n,int m)
{
    int i,j;
    printf("¾ØÕóA+¾ØÕóB:¾ØÕóC\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            crr[i][j]=arr[i][j]+brr[i][j]; 
            printf("%-3d",crr[i][j]);
            if(j==n-1) printf("\n");
        }
    }
}
int main()
{
    int arr[M][N];
    int brr[M][N];
    int crr[M][N];
    int n,m;
    printf("Input m n:");
    scanf("%d %d",&m,&n);
    printf("Please enter %d x %d ¾ØÕóA£º\n",m,n);
    JZ(arr,n,m);
    printf("Please enter %d x %d ¾ØÕóB£º\n",m,n);
    jz(brr,n,m);
    Print(crr,arr,brr,n,m);
    return 0;
}

