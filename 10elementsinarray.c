#include<stdio.h>

int main(){
	int i;
	int a[10];
	for(i=0;i<=9;i++){
		printf("Enter the value\t",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<=9;i++){
		printf("\na[%d]=%d",i,a[i]);
	}
	return 0;
}
