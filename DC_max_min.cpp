#include<iostream>
using namespace std;
int n;
int a[100];
int max,min;
void DC_max_min(int i,int j)
{
	int max1,min1, mid;
	if(i==j)//array has only one element
	{
	//cout<<"case 1"<<endl;
	min=a[i];
	max=a[i];
	}
	else if(i==j-1)//array has only two elements
	{
	//cout<<"case 2"<<endl;
	if(a[i]>a[j])
	{
		max=a[i];
		min=a[j];
		}	
		else
		{
		max=a[j];
		min=a[i];
		}
	}
	else //array has more than two elements
	{
		//cout<<"case 3"<<endl;
		mid=(i+j)/2;
		DC_max_min(i,mid);
		 max1=max;
		 min1=min;
		DC_max_min(mid+1,j);
		if(max1>max)
		{
			max=max1;
		}
		if(min1>min)
		{
			min=min1;
		}
	}
}
int main()
{
	
	cout<<"Enter the size of the array"<<endl;
	cin>>n;
	cout<<"Enter the elements in the array"<<endl;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	DC_max_min(1,n);
	cout<<"The maximum element in the array is: "<<max<<endl;
	cout<<"The minimum element in the array is: "<<min<<endl;
	return 0;
}

