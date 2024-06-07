//SWAP TWO NUMBERS
#include<iostream>
using namespace std;
class s{
	int a;
	int b;
	public:
		void getdata(){
			cout<<"Enter the first number: "<<endl;
			cin>>a;
			cout<<"Enter the second number: "<<endl;
			cin>>b;
		}
		void change(){
			int temp=0;
			temp=a;
			a=b;
			b=temp;
		}
	/*	a=5
		b=6
		a=a+b=11
		b=a-b=5
		a=a-b=6 */
		void change_again(){
			a=a+b;
			b=a-b;
			a=a-b;
		}
		void display(){
			cout<<"The value of a:"<<a<<endl;
			cout<<"The value of b:"<<b<<endl;
		}
};
int main(){
	s obj;
	obj.getdata();
	obj.display();
	obj.change();
	obj.display();
	obj.change_again();
	obj.display();
}
