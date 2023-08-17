#include<stdio.h>

int sq(int);

int main()
{
	int a,sq;
	printf("enter a number\t");
	scanf("%d",&a);
	sq=a*a;
	printf("The square is %d",sq);
	return 0;
}

int sq(int a)
{
	return(a*a);
}
