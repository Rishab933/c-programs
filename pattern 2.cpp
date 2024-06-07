/* 4 3 2 1
   4 3 2 1
   4 3 2 1
   4 3 2 1*/
   
#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the value of n: "<<endl;
	cin>>n;
	for(int i=n;i>0;i--){
		for(int j=n;j>0;j--){
			cout<<j<<" ";
		}
		cout<<endl;
	}
}
