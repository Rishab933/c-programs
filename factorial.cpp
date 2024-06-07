//FACTORIAL OF A NUMBER 
#include<iostream>
using namespace std;
class fact{
	int n;
	int f=1;
	public:
		int getfact(){
			cout<<"Enter the number to find the factorial of :"<<endl;
			cin>>n;
			for(int i=1;i<=n;i++){
				f=f*i;
			}
			return f;
		}
};
int main(){
	int factorial=0;
	fact obj;
	factorial=obj.getfact();
	cout<<"The factorial of the number is: "<<factorial;
}
