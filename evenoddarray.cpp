#include<stdio.h>
int main()
{
	int n;
	printf("enter the order of the array: ");
	scanf("%d",&n);
	int a[n];
	printf("enter the elements in the array:\n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("the original array is:\n");
	for(int i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	int b[100]={0};
	int c[100]={0};
	int d=0;
	int k=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
			b[d]=a[i];
			d++;
		}
		else
		{
			c[k]=a[i];
			k++;
		}
	}
	int x=0;
	for(int i=d;i<n;i++)
	{
		b[i]=c[x];
		x++;
	}
	printf("\nthe resultant array is \n");
	for(int i=0;i<n;i++)
	{
		printf("%d ",b[i]);
	}
	return 0;
}
