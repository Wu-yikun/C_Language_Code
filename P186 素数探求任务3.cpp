#include <stdio.h>
int IP(int n)
{
	int i,find;
	for (i=2;i<=n-1;i++)
	{
		if(n%i==0)
		{
			find=0;
			break;
		}
		else if(i==n-1&&n%i!=0)
		{
			find=1;
			break;
		}
		else continue;
	}
	return find;
 } 
void Accumulation(int n)
{
	int sum=0;
	int i;
	for(i=1;i<=n;i++)
	{
		if(IP(i))
		{
			sum+=i;
		}
		else continue;
	}
	printf("Accumulation is %d\n",sum);
}
int main()
{
	int n;
	printf("Please enter a number to calculate:\n");
	scanf("%d",&n);
	Accumulation(n);
	return 0;
}
