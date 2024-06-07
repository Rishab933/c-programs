/*A 
  B C 
  C D E
  D E F G */
   
#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the value of n: "<<endl;
	cin>>n;
	for(int i=0;i<n;i++){
			char c='A'+i;
		for(int j=0;j<=i;j++){
			cout<<c<<"\t";
				c++;
		}
	
		cout<<endl;
	}
}
