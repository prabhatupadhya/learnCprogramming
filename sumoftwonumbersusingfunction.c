#include<stdio.h>

int sum(int,int);

	int main()
	{
	int a,b;
	printf("Enter a first number\t");
	scanf("%d",&a);
	printf("enter a second number\t");
	scanf("%d",&b);
	printf("%d+%d=%d",a,b,sum(a,b));
	return 0;
}

int sum(int a, int b)
{
	return a+b;
}
