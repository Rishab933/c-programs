/*    1
    2 3
  4 5 6
7 8 9 10 */ 

#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the value of n: ";
	cin>>n;
	int c=1;
    for(int i =1;i<=n;i++){
    	int space=n-i;
    	for(int k=space;k>0;k--){
    		cout<<"  ";
    	}
    	for(int j=1;j<=i;j++){
    		cout<<c<<" ";
    		c++;
		}
		cout<<endl;
	}
}

