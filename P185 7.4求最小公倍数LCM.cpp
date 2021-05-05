#include <stdio.h>
int GCD(int m,int n)
{
    int y,gcd;
    while(n!=0)
    {
        y=m%n;
        m=n;
        n=y;
    }
    gcd=m;
    return gcd;
}
int LCM(int a,int b)
{
    int gcd;
    int lcm;
    gcd=GCD(a,b);
    lcm=a*b/gcd;
    printf("最小公倍数为%d\n",lcm);
    return lcm;
}
main()
{
    int m,n;
    printf("Input m n:\n");
    scanf("%d %d",&m,&n);
    if(m==0||n==0)
    {
        printf("error\n");
    }
    else 
    LCM(m,n);
}
