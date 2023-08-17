#include<stdio.h>

int oe(int,int);

int main()
{
	int a;
	printf("enter a number\t");
	scanf("%d",&a);
	return 0;
}

int oe(int a)
{
	if(a%2==0)
	{
		printf("it is even");
	}
	
	else
	{
		printf("it is odd");
	}
}
