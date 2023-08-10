#include<stdio.h>

int main(){
	int sum=0,i;
	float avg;
	for(i=1;i<=10;i++){
		sum=sum+i;
	}
	avg=sum/10.0;
	printf("\n the sum is %d\n",sum);
	printf("\nthe average is %f\n",avg);
	return 0;
}
