#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int IsPrime(int n)
{
    int i,find;
    for(i=2;i<=sqrt(n);i++)
    {
        if(n%i!=0)
        {
            find=1;
        }
        else
        {
            find=0;
            break;
        }
    }
    return find;
}
void Goldbach(int n)
{
    int a;
    for(a=3;a<=(n/2);a++)
    {
        if(IsPrime(a)&&IsPrime(n-a))
        {
            printf("%d=%d+%d\n",n,a,n-a);
        }
        else continue;
    }
}
int main()
{
    int n;
    printf("Enter a number (exit with n<6 can not be divided by 2):\n");
    scanf("%d",&n);
    if(n<6||n%2!=0)
    {
        exit(0);
    }
    else 
    Goldbach(n);
    return 0;
}
