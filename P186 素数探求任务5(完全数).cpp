#include <stdio.h>
void IsPerfect(int n)
/*Judge a number whether a perfect number*/ 
{
	int sum=0;
	int i;
	for(i=1;i<n;i++)
	{
		if(n%i==0)
		{
			sum+=i;
		}
		else continue;
	}
	if(sum==n)
	{
		printf("%d is a Perfect number\n",n);
	}
	else
	{
		printf("%d is not a Perfect number\n",n);
	}
 }
int main()
{
	int m;
	printf("Please enter a number to judge wheather it is a Perfect number:\n");
	scanf("%d",&m);
	IsPerfect(m);
	return 0;
}
