/*D
  C D
  B C D
  A B C D */
   
#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the value of n: "<<endl;
	cin>>n;
	
	for(int i=0;i<n;i++){
			char c='A'+n-1;
			c=c-i;
		for(int j=0;j<=i;j++){
			cout<<c<<"\t";
				c++;
		}
	
		cout<<endl;
	}
}
