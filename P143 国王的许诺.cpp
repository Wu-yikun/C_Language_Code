#include <stdio.h>
int main1()
{
	double sum=0,n=1;
	float x;
	int i;
	for (i=1;i<=64;i++)//循环64次,从2^0~2^63. 
	{
		sum+=n;
		n=2*n;
	}
	x=sum/(1.42e8);
	printf("sum=%.0f\n",sum);
	printf("total=%.0f立方米\n",x); 
}
#include <stdio.h>
#include <math.h>
int main()
{
	double sum=0,n; 
	float x;
	int i;
	for (i=1;i<=64;i++)
	{
		n=pow(2,i-1);
		sum+=n;
	}
	x=sum/(1.42e8);
	printf("sum=%e\n",sum);
	printf("total=%e立方米\n",x); 
}
