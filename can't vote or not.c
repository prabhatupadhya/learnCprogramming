#include<stdio.h>

int main(){
	int age;
	printf("enter your age ");
	scanf("%d",&age);
	if(age>=18){
		printf("you are eligible for voting");
	}
	else{
		printf("you're not eligible for voting");
	}
	return(0);
}
