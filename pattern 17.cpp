/*    *
    * *
  * * *
* * * * */ 

#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the value of n: ";
	cin>>n;
	
    for(int i =1;i<=n;i++){
    	int space=n-i;
    	for(int k=space;k>0;k--){
    		cout<<"  ";
    	}
    	for(int j=1;j<=i;j++){
    		cout<<'*'<<" ";
		}
		cout<<endl;
	}
}

