#include<stdio.h>

int main(){
	
	int count=0,num,i;
	printf("enter a number");
	scanf("%d",&num);
	for(i=1;i<=num;i++){
		
		if(num%i==0)
		{
			count++;
		}
	}
		if(count==2)
		{
			
			printf("prime");
		}
		else{
			printf("composite");
		}
	
	return 0;
}
