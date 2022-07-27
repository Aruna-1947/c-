#include<stdio.h>
int main()
{
int n,i,a[20],j,temp;
printf("enter no.of elements:\n");
scanf("%d",&n);
printf("enter elements:\n");

for(i=0;i<n;i++)
  {
	scanf("%d",&a[i]);
  }
  
for(i=0;i<n;i++)
{
	for(j=i+1;j<n;j++)
	{
		if(a[i]>a[j]);
		{
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;
	    }
	}
 }
 
printf("the elements are:\n");
for(i=0;i<n;i++)
{
	printf("%d\t",a[i]);
}
 return 0;
}
