#include <stdio.h>
#include <stdlib.h>
void Change(int n,int i)
{
 		char arr[16]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
		int x;
		if(n>16||n<2)
		exit(0);
		x=i%n;
		if(i/n!=0)
		{
			Change(n,i/n);
			printf("%c",arr[x]);
		}
		else printf("%c",arr[x]);
 }
 int main()
 {
 	int n,i,x;
 	while(i>0)
 	{
 		printf("请输入一个十进制正整数<-1表示结束输入>:");
 		scanf("%d",&i);
 		if(i==-1)
 		exit(0);
 		printf("请输入要转化的进制:");
		scanf("%d",&n);
		printf("转换结果为:"); 
		Change(n,i);
		printf("\n");
	}
	return 0;
 }
