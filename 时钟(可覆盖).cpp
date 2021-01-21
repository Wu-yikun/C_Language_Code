#include <stdio.h>
typedef struct time
{
    int hour;
    int minute;
    int second;
} TIME;
void Update(TIME *p)
{
    int i;
    p->second++;
    if(p->second==60)
    {
        p->second=0;
        p->minute++;
    }
    if(p->minute==60)
    {
        p->minute=0;
        p->hour++;
    }
    if(p->hour==24)
    {
        p->hour=0;
    }
    printf("Time:%02d:%02d:%02d\r",p->hour,p->minute,p->second);
    for(i=0; i<500000000; i++);
}
int main()
{
    TIME t;
    int i;
    t.hour=t.minute=t.second=0;
    for(i=0; i<50000000; i++)
    {
        Update(&t);
    }
    return 0;
}
