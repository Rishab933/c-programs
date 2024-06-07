//AREA OF DIFFERENT SHAPES USING MENU DRIVEN PROGRAM
#include<iostream>
using namespace std;
class shapes{
	double area;
	public:
		void square(){
			float a;
			cout<<"Enter the sides of the square: "<<endl;
			cin>>a;
			area=a*a;
		}
		void rectangle(){
			float length;
			float breadth;
			cout<<"Enter the length of the rectangle: "<<endl;
			cin>>length;
			cout<<"Enter the breadth of the rectangle: "<<endl;
			cin>>breadth;
			area=length*breadth;
		}
		void circle(){
			float r;
			cout<<"Enter the radius of the circle: "<<endl;
			cin>>r;
			area= 3.14*r*r;
		}
		void triangle(){
			float base;
			float height;
			cout<<"Enter the base of the triangle: "<<endl;
			cin>>base;
			cout<<"Enter the height of the triangle: "<<endl;
			cin>>height;
			area=0.5*base*height;
		}
		void display(){
			cout<<"The area of the giver shape is: "<<area<<endl;
		}
};
int main(){
	shapes obj;
	int c;
		while(1){
	cout<<"Press 1 for square"<<endl;
	cout<<"Press 2 for rectangle"<<endl;
	cout<<"Press 3 for circle"<<endl;
	cout<<"Press 4 for triangle"<<endl;
	cout<<"Press 5 for exit"<<endl;
	cout<<"Enter your choise: "<<endl;
	cin>>c;
	switch(c)
	{
		case 1: obj.square();
		obj.display();
		break;
		case 2: obj.rectangle();
		obj.display();
		break;
		case 3: obj.circle();
		obj.display();
		break;
		case 4: obj.triangle();
		obj.display();
		break;
		default: cout<<"wrong choise";
		break;
		case 5: exit(7);
		
	}
}
}
