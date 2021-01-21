#include <stdio.h>
#include <string.h>
#define N 20
int Check(char arr[],int n)
{
	int find;
	int i,j;
	for(i=0;i<(n/2);i++)
	{
		if(arr[i]!=arr[n-i-2])
		{
			find=0;
			break;
		}
		else
			find=1;
	}
	return find;
}
int main()
{
	int x;
	int n=0;
	char arr[N];
	int i=-1;
	printf("Input an English sentence(Length less than 20):");
	do
	{
		i++;
		n++;
		scanf("%c",&arr[i]);
	}while(arr[i]!='!');
	x=Check(arr,n);
	if(x)
	{
		printf("回文:YES!\n");
	}
	else
	{
		printf("不是回文:NO!\n");
	}
	return 0;
}
