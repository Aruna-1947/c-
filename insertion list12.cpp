#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,temp,n,arr[25];
	printf("Enter no.of elements:\n");
	scanf("%d",&n);
	printf("enter elements : ");
	for(i=0;i<n;i++)
	{
	scanf("%d",&arr[i]);
    }
	for(i=1;i<n;i++)
	{
		temp=arr[i];
		for(j=i-1;j>=0;j--)
		{
		while(temp<arr[j])
		{
			arr[j+1]=arr[j];
			}
			arr[j+1]=temp;
		}
	}
		printf("order of sortted elements :\n");
		for(i=0;i<n;i++)
		printf("%d\t",arr[i]);
		return 0;
}
