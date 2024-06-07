#include<iostream>
using namespace std;
int n;
int A[100];
int m,M=0;
void Non_DC_max_min(int a[],int n,int max,int min)
{
	max=a[0];
	min=a[0];
	for(int i=1;i<n;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
		if(a[i]<min)
		{
			min=a[i];
		}
	}
	cout<<"The maximum element in the array is: "<<max<<endl;
	cout<<"The minimum element in the array is: "<<min<<endl;
}
int main()
{
	cout<<"Enter the size of the array"<<endl;
	cin>>n;
	cout<<"Enter the elements in the array"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>A[i];
	}
	Non_DC_max_min(A,n,M,m);
	return 0;
}
