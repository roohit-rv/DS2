#include<stdio.h>
void add(int x, int y)
{
	printf("Addition=%d+%d= ",x,y);
	int c=x+y;
	printf("%d\n",c);
	
}
void sub(int x, int y)
{
	printf("Subtraction=%d-%d= ",x,y);
	int c=x-y;
	printf("%d\n",c);
	
}
void mul(int x, int y)
{
	printf("Multiplication=%d*%d= ",x,y);
	int c=x*y;
	printf("%d\n",c);
	
}
int main()

{
	int a,b;
	printf("enter any two numbers\n");
	scanf("%d %d",&a,&b);
	add(a,b);
	sub(a,b);
	mul(a,b);
	return 0;
}
