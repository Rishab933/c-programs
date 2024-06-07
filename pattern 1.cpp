/* 1 2 3 4
   1 2 3 4
   1 2 3 4 
   1 2 3 4 */
   
#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the value of n: "<<endl;
	cin>>n;
	for(int i=1;i<=n+1;i++){
		for(int j=1;j<n+1;j++){
			cout<<j<<" ";
		}
		cout<<endl;
	}
}
