#include <stdio.h>
#define N 10
Findmax(int num[])
{
    int x=0;
    int y=0;
    int max,min;
    int i,temp;
    max=num[0];
    min=num[0];
    for(i=1;i<N;i++)
    {
        if(num[i]>max)
        {
            x=i;
            max=num[i];
        }
        else if(num[i]<min)
        {
            y=i;
            max=num[i];
        }
    }
    temp=num[x];
    num[x]=num[y];
    num[y]=temp;
}
int main()
{
    int num[N];
    int i;
    for(i=0;i<N;i++)
    {
        printf("Input a Integer£º");
        scanf("%d",&num[i]);
        fflush(stdin);
    }
    Findmax(num);
    for(i=0;i<N;i++)
    {
        printf("score[%d]=%d\n",i,num[i]);
    }
    return 0;
}
