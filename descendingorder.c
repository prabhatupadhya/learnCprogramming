#include<stdio.h>
int main()
{
int a[10],i, j, temp;
printf("enter 10 numbers\t");
for(i=0;i<10;i++)
{
scanf("%d\t",&a[i]);
}
for(i=0;i<10;i++)
{
for(j=i+1;j<=10;j++)
{
if (a[i]<a[j])
{
temp = a[i];
a[i]=a[j];
a[j]=temp;
}
}
}
for(i=0;i<10;i++)
{
printf("\n a[%d]=%d",i,a[i]);
}
return 0;
}
