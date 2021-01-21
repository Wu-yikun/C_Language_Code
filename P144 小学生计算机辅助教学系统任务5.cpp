#include <stdio.h>
#include <time.h>
#include <stdlib.h>
main()
{
	Again:int c,e,f=0,n=1,op;
	double g=0;
    int b;
    double a;
    while(n<=10)
    {
        srand(time(NULL));
        a=rand()%10+1;
        b=rand()%10+1;
        op=rand()%4+1;      
        switch(op)
        {
            case 1:
            e=a+b;
            printf("%.0f+%d=",a,b);
            break;
            case 2:
            e=a-b;
            printf("%.0f-%d=",a,b);
            break;
            case 3:
            e=a*b;
            printf("%.0f*%d=",a,b);
            break;
            case 4:
            e=a/b;
            printf("%.0f/%d=",a,b);
            break;
            default :
            printf("error\n");
        }
        scanf("%d",&c);
        fflush(stdin);
        if(e!=c)
        {
        	printf("Wrong!\n");
            f++;
            n++;
            continue;
        }
        else
        {
        	printf("Right!\n") ; 
            g++;
            n++;
            continue;
        }
    }
    if(g<7.5)
    {
    	printf("Try again\n");
    	goto Again;
	}
    else
    printf("正确率高达%.0f%%",g*10);
}
