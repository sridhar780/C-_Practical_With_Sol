//10.Write a program to demonstrate single inheritance,multilevel inheritance and multiple inheritance.
#include<iostream>
using namespace std;
class Shape{
	protected:
		float width,height;
	public:
	void set_data(float a,float b){
		width=a;
		height=b;
	}	
}; 
class Rectangle:public Shape{
	public:
		float area(){
			return width*height;
		}
};
class Triangle:public Shape{
	public:
		float area(){
			return (width*height)/2;
		}
};
int main(){
	Rectangle rect;
	Triangle tri;
	
	rect.set_data(7,3);
	tri.set_data(4,6);
	
	cout<<"Area of Rectangle is:"<<rect.area()<<endl;
	cout<<"Area of Triangle is:"<<tri.area()<<endl;
	
	return 0;
}
