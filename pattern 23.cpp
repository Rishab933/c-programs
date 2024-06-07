/*
        1
      1 2 1
    1 2 3 2 1
  1 2 3 4 3 2 1  */
  
#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter the value of n ";
	cin>>n;
	for(int i =1;i<=n;i++){
		int s=n-i;
		for(int k=s;k>0;k--){
			cout<<"  ";
		}
		for(int j=1;j<=i;j++){
			cout<<j<<" ";
		}
	    for(int x=i-1;x>0;x--){
	    	cout<<x<<" ";
		}
		cout<<endl;
	}
}
