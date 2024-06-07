// STUDENT INFO USING CLASS OBJECT.
#include<iostream>
using namespace std;
class student{
	int id;
	string name;
	float marks;
	public:
		void input(){
			cout<<"Enter your id: "<<endl;
			cin>>id;
			cout<<"Enter your name: "<<endl;
			cin>>name;
			cout<<"Enter your marks: "<<endl;
			cin>>marks;
		}
		void display(){
			cout<<"ID: "<<id<<endl;
			cout<<"NAME: "<<name<<endl;
			cout<<"MARKS: "<<marks<<endl;
		}
};
int main(){
	int i,n;
	student obj[10];
	cout<<"Enter the number of students "<<endl;
	cin>>n;
	for(i=0;i<n;i++){
		obj[i].input();
		obj[i].display();
	}
}
