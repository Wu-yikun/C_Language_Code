#include <stdio.h>
#define N 50
typedef struct student
{
	long ID;
	char name[20];
	int age;
	char sex;
	int score[5];
	int sum;
	float aver;
}STUDENT;
void Inputscore(STUDENT stu[],int n)
{
	int i,j;
	for(i=0;i<n;i++)
	{
		printf("请输入第%d位学生的信息:\n",i+1);
		printf("<ID>:");
		scanf("%ld",&stu[i].ID);
		printf("<Name>:");
		scanf("%s",stu[i].name);
		printf("<Age>:");
		scanf("%d",&stu[i].age);
		printf("<Sex>:");
		scanf(" %c",&stu[i].sex);
		printf("<Score>:");
		for(j=0;j<5;j++)
		{
			scanf("%d",&stu[i].score[j]);
		}
	}
}
void Func(STUDENT stu[],int n)
{
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<5;j++)
		{
			stu[i].sum+=stu[i].score[j];
		}
		stu[i].aver=(float)(stu[i].sum)/5;
	}
}
void Outputscore(STUDENT stu[],int n)
{
	int i,j;
	printf("所有的学生信息如下:\n");
	for(i=0;i<n;i++)
	{
		printf("第%d个学生的信息:\n",i+1);
		printf("<ID>:%d\n",stu[i].ID);
		printf("<Name>:%s\n",stu[i].name);
		printf("<Age>:%d\n",stu[i].age);
		printf("<Sex>:%c\n",stu[i].sex);
		printf("<Score>:");
		for(j=0;j<5;j++)
		{
			printf("%d  ",stu[i].score[j]);
		}
		printf("\n<Sum>:%d\n",stu[i].sum);
		printf("<Average>:%lf\n",stu[i].aver);
	}
}
int main()
{
	STUDENT stu[N];
	int i,n;
	printf("请输入学生的个数:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		stu[i].sum=0;
	}
	Inputscore(stu,n);
	Func(stu,n);
	Outputscore(stu,n);
	return 0;
}
