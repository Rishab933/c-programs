#include<stdio.h>
int main()
{
	int n;
	printf("enter the no of elements of the array");
	scanf("%d",&n);
	int a[n]={0};
	printf("enter the elements of the array");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	int b[n-1];
	int p;
	printf("\nenter the position whose element is to be deleted");
	scanf("%d",&p);
	for(int i=0;i<p;i++)
	{
		b[i]=a[i];
	}
	for(int i=p-1;i<n-1;i++)
	{
		b[i]=a[i+1];
	}
	for(int i=0;i<n-1;i++)
	{
		printf("%d\t",b[i]);
	}
	return 0;
}
