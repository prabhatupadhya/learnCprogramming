#include<stdio.h>

int main(){
	
	int num,armnum=0,rem,o;
	printf("enter the number");
	scanf("%d",&num);
	o=num;
	while(num>0)
	{
		rem=num%10;
		armnum=armnum+rem*rem*rem;
		num=num/10;
		
	}
	if(armnum==o){
		printf("it is armstrong");
	}
	else{
		printf("it is not armstrong");
	}
	
	return 0;
}
