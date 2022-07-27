#include<stdio.h>
#include<conio.h>
main()
{
int a[10],max,i;
printf("enter element for the array: ");
scanf("%d",&a[i]);
for(i=0;i<a[10];i++)
max=a[0];
for(i=1;i<a[10];i++)
{
if(max<a[i])
max=a[i];
}
printf("maximum no= %d",max);
getch();
}
