/* 1 2 3 4
   5 6 7 8
   9 10 11 12
   13 14 15 16*/
   
#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the value of n: "<<endl;
	cin>>n;
	int c=1;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<c<<"\t";
			c++;
		}
		cout<<endl;
	}
}
