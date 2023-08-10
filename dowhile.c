#include <stdio.h>
int main()
{
	int i=1;
	do
	{
		if(i%3==0 || i%13==0 || i%17==0){
			printf("%d\n",i);
		}
		i++:
	}while (i<=100);
	return 0;
}
