#include <stdio.h>
#include <time.h>
#include <stdlib.h>
main()
{
	Again:int c,e,f=0,n=1,op;
	int x,y;
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
        	y=rand()%4+1;
        	switch(y)
        	{
        		case 1:
        			printf("No.Please try again.\n");
        			break;
        		case 2:
        			printf("Wrong.Try once more.\n");
        			break;
        		case 3:
        			printf("Don't give up!'\n");
        			break;
        		case 4:
        			printf("Not correct.Keep trying.\n");
        			break;
        		default:
        			printf("error!\n");
			}
            f++;
            n++;
            continue;
        }
        else
        {
        	x=rand()%4+1;
        	switch(x)
        	{
        		case 1:
        			printf("Very good!\n");
        			break;
        		case 2:
        			printf("Excellent!\n");
        			break;
        		case 3:
        			printf("Nice work!\n");
        			break;
        		case 4:
        			printf("Keep up the good work!\n");
        			break;
        		default:
        			printf("error!\n");
			}
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
