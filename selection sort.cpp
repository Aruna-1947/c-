#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,n,temp,arr[25];
	printf("Enter the no.of elements:\n");
	scanf("%d",&n);
	printf("enter elements:\n");
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arr[i]>arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
				}
			}
		}
		printf("sorted elements: ");
		for(i=0;i<n;i++)
		printf("%d\n",arr[i]);
		return 0;
}
