/*    1 2 3 4 5 5 4 3 2 1
      1 2 3 4 * * 4 3 2 1
      1 2 3 * * * * 3 2 1
      1 2 * * * * * * 2 1
      1 * * * * * * * * 1    */
      
#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter the value of n ";
	cin>>n;
	
	for(int i =0;i<n;i++){
		int c=1;
    	for(int j=n-i;j>0;j--){
    		cout<<c<<" ";
    		c++;
		}
		
		for(int x=i;x>0;x--){
	    	cout<<'*'<<" "<<'*'<<" ";
	    }
	    	for(int v=n-i;v>0;v--){
    		cout<<v<<" ";
		}
		cout<<endl;
	}
}

