/* 1 2 3 4
     2 3 4
       3 4
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
    	int c=i+1;
    	for(int j=n-i;j>0;j--){
    	
    		cout<<c<<" ";
    		c++;
		}
		cout<<endl;
	}
}

