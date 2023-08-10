#include<stdio.h>
int main()
{
	int a[10],i,greatest=0;
	for(i=0;i<10;i++)
	{
		printf("enter a[%d]",i);
		scanf("%d",&a[i]);
		if(greatest<a[i])
		{
			greatest=a[i];
		}
	}
	printf("greatest=%d",greatest);
	return 0;
}
