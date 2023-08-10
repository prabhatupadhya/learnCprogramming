#include<stdio.h>

int main(){
	
	int a[3],sum;
	printf("enter price of first item");
	scanf("%d",&a[0]);
	printf("enter price of second item");
	scanf("%d",&a[1]);
	printf("enter price of third item");
	scanf("%d",&a[2]);
	sum=a[0]+a[1]+a[2];
	printf("the sum is %d",sum);  
	return 0;

}


