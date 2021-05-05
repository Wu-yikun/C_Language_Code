#include <stdio.h>
#include <stdlib.h>
#define N 6
void Print(int count[],int grade[],int feedback[])
{
    int i,j;
    printf("Grade    Count    Histogram\n");
    for(i=0;i<10;i++)
    {
        printf("%2d",grade[i]);
        printf("%10d        ",count[i]);
        for(j=1;j<=count[i];j++)
        {
            printf("%s","*");
        }
        printf("\n");
    }
}
void Calculate(int count[],int grade[],int feedback[])
{
    int i;
    int n;
    for(i=0;i<N;i++)
    {
        printf("请第%d位学生打分(1-10分)：",i+1);
        scanf("%d",&feedback[i]);
        if(feedback[i]>10||feedback[i]<0)
        {
            printf("Error!");
            exit(0);
        }
    }
    for(n=0;n<N;n++)
    {
        for(i=0;i<10;i++)
        {
            if(feedback[n]==grade[i])
            {
                count[i]++;
            }
        }
    }
}
double Mean(int feedback[])
{
    int i;
    int sum=0;
    for(i=0;i<N;i++)
    {
        sum+=feedback[i];
    }
    return (double)sum/N;
}
int Mode(int feedback[],int count[],int grade[])
{
    int mode;
    int i;
    int n;
    mode=count[0];
    for(i=1;i<N;i++)
    {
        if(mode<count[i])
        {
            n=i;
        }
        else n=0;
    }
    return grade[n];
}
double Datasort(int feedback[])
{
    int i,j,k;
    int temp;
    for(i=0;i<N-1;i++)
    {
        k=i;
        for(j=i+1;j<N;j++)
        {
            if(feedback[j]<feedback[k])
            {
                k=j;
            }
        }
        if(k!=i)
        {
            temp=feedback[k];
            feedback[k]=feedback[i];
            feedback[i]=temp;
        }
    }
    if(N%2!=0)
    {
        return feedback[N/2];
    }
    else
        return (feedback[N/2]+feedback[(N/2)-1])/2.0;
}
int main()
{
    int grade[10]={1,2,3,4,5,6,7,8,9,10};
    int feedback[N];
    int count[10]={0,0,0,0,0,0,0,0,0,0};
    int b;
    double a,d;
    int i;
    Calculate(count,grade,feedback);
    Print(count,grade,feedback);
    a=Mean(feedback);
    b=Mode(feedback,count,grade);
    d=Datasort(feedback);
    printf("平均值：%lf\n",a);
    printf("众数：%d\n",b);
    printf("中位数：%lf\n",d);
    printf("整理后的反馈意见:");
    for(i=0;i<N;i++)
    {
        printf("%d",feedback[i]);
    }
    return 0;
}
