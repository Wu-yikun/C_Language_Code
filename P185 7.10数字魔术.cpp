#include <stdio.h>
int Magic(int g)
{
    int x1,x2,x3,x4,x5;
    int n;
    int a,b,c;
    for(n=100;n<=999;n++)
    {
        a=n/100;
        b=(n-a*100)/10;
        c=n%10;
        x1=a*100+c*10+b;
        x2=b*100+a*10+c;
        x3=b*100+c*10+a;
        x4=c*100+a*10+b;
        x5=c*100+b*10+a;
        if(g==x1+x2+x3+x4+x5)
        {
            printf("The value is %d\n",n);
            break;
        }
        else if(g!=x1+x2+x3+x4+x5&&n==999)
        {
            printf("error\n");
        }
        else continue;
    }
    return n;
}
main()
{
    int g;
    printf("Please enter the addition:\n");
    scanf("%d",&g);
    Magic(g);
}
