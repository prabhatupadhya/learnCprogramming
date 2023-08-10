#include<stdio.h>
int main()
{
	int a[10],i,sum=0;
	for(i=0;i<10;i++){
		printf("elements of array is %d",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<10;i++){
		sum=sum+a[i];
	}
	printf("the sum is %d",sum);
	return 0;
}
