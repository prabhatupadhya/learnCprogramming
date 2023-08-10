#include<stdio.h>

int main(){
	
	int a;
	
	printf("Enter a value of a");
	scanf("%d",&a);
	
	switch(a)
	{
		case 1:
			printf("one");
			break;
		case 2:
			printf("two");
			break;
		case 3:
			printf("three");
			break;	
			default:
				printf("invalid");
	}
		return(0);
}
