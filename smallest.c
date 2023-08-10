#include<stdio.h>
int main()
{
	int a[10],i,smallest;
	for(i=0;i<10;i++)
	{
		printf("enter a[%d]\t",i);
		scanf("%d",&a[i]);
}
		smallest=a[0];
		for(i=0;i<10;i++)
		{
		
		if(smallest>a[i])
		{
			smallest=a[i];
		}
		
	}
	printf("smallest=%d",smallest);
	
	
	return 0;
}
