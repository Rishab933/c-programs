/*A
  B C
  D E F 
  G H I J */
   
#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the value of n: "<<endl;
	cin>>n;
	char c='A';
	for(int i=0;i<n;i++){
		for(int j=0;j<=i;j++){
			cout<<c<<"\t";
				c++;
		}
	
		cout<<endl;
	}
}
