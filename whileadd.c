#include<stdio.h>
int main(){
	int sum=0,num;
do{
	printf("enter a number to add and 0 to display sum");
	scanf("%d",&num);
	sum=sum+num;
} while(num!=0);
printf("sum=%d",sum);
return 0;
}

