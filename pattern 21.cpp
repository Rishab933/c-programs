/* 1 1 1 1
     2 2 2 
       3 3 
         4
 */ 

#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the value of n: ";
	cin>>n;
    for(int i =0;i<n;i++){
    	for(int k=1;k<=i;k++){
    		cout<<"  ";
    	}
    	for(int j=n-i;j>0;j--){
    		int c=i+1;
    		cout<<c<<" ";
    		c++;
		}
		cout<<endl;
	}
}

