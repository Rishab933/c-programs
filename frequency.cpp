#include<stdio.h>
int main()
{
	int n;
	printf("enter the order of the array: ");
	scanf("%d",&n);
	int a[n];
	printf("\nenter the elements in the array");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nthe input array is:\n");
	for(int i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	int temp=0;
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
		if(a[i]>a[j])
		{
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;
		}
		}
	}
	printf("\nshorted array is :\n");
	for(int i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\nthe frequencies are");
    for(int i=0;i<n;i++)
    {
    	int c=1;
    	for(int j=i+1;j<n;j++)
    	{
    		if(a[i]==a[j])
    		c++;
		}
		printf("\n%d - %d",a[i],c);
		i=i+(c-1);
	}
	return 0;
	}

