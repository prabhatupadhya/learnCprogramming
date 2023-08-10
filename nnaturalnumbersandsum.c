#include<stdio.h>

int main(){
	
	int sum=0,a,n;
	printf("enter the number of terms");
	scanf("%d",&n);
	for(a=1;a<=n;n++)
	{
	printf("%d",n);
	sum=sum+a;
}
printf("\nthe sum is :%d\n",sum);
	return 0;
}
