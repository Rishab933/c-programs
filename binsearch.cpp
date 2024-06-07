#include<stdio.h>
int main()
{
	int n;
	printf("enter the number of elements of the array");
	scanf("%d",&n);
	int a[n]={0};
	printf("enter the elements in the array in a sorted manner");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);		
	}
	int b;
	printf("enter the element to be searched");
	scanf("%d",&b);
	int l=0;
	int u=n-1;
	int mid=(l+u)/2;
	while(l<=u)
	{
		if(a[mid]<b)
		l=mid+1;
		else if(a[mid]==b)
		{
		printf("%d fount at the location %d",b,mid+1);
		break;
	}
	else
	u=mid-1;
	mid=(u+l)/2;
}
if(l>u)
printf("element is not present in the list");
return 0;

	}

