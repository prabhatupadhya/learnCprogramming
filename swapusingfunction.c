#include<stdio.h>

int swap(int,int);

int main()
{
	int a,b;
	printf("enter a first number\t");
	scanf("%d",&a);
	printf("enter a second number\t");
	scanf("%d",&b);
	swap(a,b);
	return 0;	
}

int swap(int a, int b)
{
	int c;
	c=a;
	a=b;
	b=c;
	printf("after swapping %d %d",a,b);

}
