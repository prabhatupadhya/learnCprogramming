#include<stdio.h>

int main(){
	
	int num,i,cube;
	printf("enter a number");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		printf("\n the number is");
		cube=i*i*i;
		printf("\n the cube is %d\n",cube);
	}
	return 0;
}
