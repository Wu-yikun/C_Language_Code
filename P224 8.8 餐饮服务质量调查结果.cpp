#include <stdio.h>
#include <stdlib.h>
#define N 6
void Print(int count[],int grade[],int stu[])
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
void Calculate(int count[],int grade[],int stu[])
{
    int i;
    int n;
    for(i=0;i<N;i++)
    {
        printf("请第%d位学生打分(1-10分)：",i+1);
        scanf("%d",&stu[i]);
        if(stu[i]>10||stu[i]<0)
        {
            printf("Error!");
            exit(0);
        }
    }
    for(n=0;n<N;n++)
    {
        for(i=0;i<10;i++)
        {
            if(stu[n]==grade[i])
            {
                count[i]++;
            }
        }
    }
}
int main()
{
    int grade[10]={1,2,3,4,5,6,7,8,9,10};
    int stu[N];
    int count[10]={0,0,0,0,0,0,0,0,0,0};
    Calculate(count,grade,stu);
    Print(count,grade,stu);
    return 0;
} 
