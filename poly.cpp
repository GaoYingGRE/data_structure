// here we implement the class of circle and triangle from shapes
#include<iostream>
using namespace std;
class Shape{
protected: 
	int width;
	int height;
	int color;
public:
	Shape(int a=0, int b=0, int c=0){
		width=a;
		height=b;
		color=c;
	}
	virtual int getArea(){
		return width*height;
	}
	void printArea(){
		cout<<"the area is "<<getArea()<<endl;
	}
	void printColor(){
		cout<<"the color is "<<color<<endl;
	}
};

class Triangle: public Shape
{
public:
	Triangle(int a=0, int b=0, int c=0):Shape(a,b,c){}
	int getArea(){
		return width*height/2;
	}
	/* data */
};

int main(){
	Triangle t(1,8,2);
	Shape s(1,8,2);
	s.printArea();
	t.printArea();
	cout<<"triangle area is "<<t.getArea()<<endl;
	cout<<"default area is "<<s.getArea()<<endl;
	return 0;
}