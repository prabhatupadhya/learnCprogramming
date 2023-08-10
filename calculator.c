#include<stdio.h>
int main()
{
int num,result=0;
char operation;

printf("Enter +,-,*,/ for arithmatic operation and e for result");
printf("\nenter number");
scanf("%d",&num);
result=num;

do{
	printf("\nenter operator");
	scanf("%s",&operation);
	printf("\nEnter number");
	scanf("%d",&num);
	
	switch(operation)
	{
	
	case '+':
		result=result+num;
		printf("\nresult=%d",result);
		break;
	case '-':
		result=result-num;
		printf("\nresult=%d",result);
		break;
	case '*':
		result=result*num;
		printf("\nresult=%d",result);
		break;
		case '/':
		result=result/num;
		printf("\nresult=%d",result);
		break;
	default:
		printf("Invalid input");
	}
}while(operation!='e');
	
	return 0;
	
}
