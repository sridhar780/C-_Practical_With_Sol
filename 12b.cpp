//12.Write a program to implement the polymorphism and the following concepts using class and object
//b.Pure virtual functions(Abstract class)
#include<iostream>
using namespace std;
class BaseClass{ //Abstract class
	public:
		virtual void Display1()=0;//Abstract function(Pure virtual functions)
		virtual void Display2()=0;	
		void display3(){
			cout<<"Display3  method of Base class"<<endl; 
		}
};

class DerivedClass:public BaseClass{
	public:
		void Display1(){
					cout<<"Display one  method of Derived Class"<<endl;
		}
		void Display2(){
			cout<<"Display Two method of Derived Class"<<endl; 
		}
		
};
int main(){
	DerivedClass D;
    D.Display1();
    D.Display2();
    D.display3();
		return 0;
	}
