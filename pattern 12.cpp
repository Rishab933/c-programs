/*A B C D
  E F G H
  I J K L
  M N O P */
   
#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the value of n: "<<endl;
	cin>>n;
	for(int i=0;i<n;i++){
			char c='A'+i;
		for(int j=0;j<n;j++){
			cout<<c<<"\t";
				c++;
		}
	
		cout<<endl;
	}
}
