#include <stdio.h> 
void print()
{
	char c;
	if((c=getchar())!='\n')
	{
		print();
		putchar(c); 
	} 
}
int main()
{
	printf("Input a string:");
	print();
	return 0;
}
