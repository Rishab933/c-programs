/*1
  2 3
  3 4 5 
  4 5 6 7
  5 6 7 8 9 */
   
#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the value of n: "<<endl;
	cin>>n;
	for(int i=1;i<=n;i++){
		int c=i;
		for(int j=1;j<=i;j++){
			cout<<c<<"\t";
			c++;
		}
		cout<<endl;
	}
}
