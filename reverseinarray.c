#include<stdio.h>

int main()
{
	int a[10],i;
	printf("enter the elements in array\t\n");
	for(i=0;i<=4;i++)
	{
		scanf("%d",&a[i]);	
	}
	printf("the reverse elements are\n");
	for(i=4;i>=0;i--)
	{
		printf("%d\n",a[i]);
	}
	return 0;
}
