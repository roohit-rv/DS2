#include<stdio.h>
compare(int x, int y)
{
	if(x>y)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int main()

{
	int a=5,b=3;
   
    printf("%d",compare(a,b));
    return 0;
	
}
