//15.Write a program to demonstrate dynamic polymorphism using method overriding and dynamic method dispatch
#include<iostream>
using namespace std;
class Shape{
	protected:
		int w,h;
	public:	
		Shape(int a=0,int b=0){
			w=a;
			h=b;	
		}
		int show(){
			cout<<"Base class"<<endl; 
		}
};

class Rect:public Shape{
	public:
		Rect(int a=0,int b=0):Shape(a,b){
		
		    
		}
		int show(){
			cout<<"Derived Class(rect)"<<endl;
			return w*h;  
		}
		
};
class Tri:public Shape{
	public:
		Tri(int a=0,int b=0):Shape(a,b){
		
		    
		}
		int show(){
			cout<<"Derived Class(Tri)"<<endl;
			return (w*h)/2;  
		}
	
};
int main(){
	Shape *s;
    //Shape *s1;
	Rect r(4,3);
	Tri t(3,6);
	s=new Rect;
	s->show();
	s=new Tri;
	s->show();
	
	return 0;
}
