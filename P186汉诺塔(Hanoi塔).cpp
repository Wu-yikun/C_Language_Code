#include <stdio.h>
int count=0; 
void Hanoi(char A,char B,char C,int n)
{
	if(n==1)
	{
		printf("%d盘子:move %c to %c\n",n,A,C);
		count++;
	}
	else
	{
		Hanoi(A,C,B,n-1);
		printf("%d盘子:move %c to %c\n",n,A,C);
		Hanoi(B,A,C,n-1);
		count++;
	}
}
int main()
{
	int n;
	char A,B,C;
	printf("Input n:");
	scanf("%d",&n);
	Hanoi('A','B','C',n);
	printf("移动%d次\n",count); 
	return 0;
}
