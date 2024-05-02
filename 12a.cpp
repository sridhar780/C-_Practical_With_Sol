//12.Write a program to implement the polymorphism and the following concepts using class and object
//a.Virtual functions
//b.Pure virtual functions
#include<iostream>
using namespace std;
class BaseClass{
	public:
		virtual void Display(){
			cout<<"Display method of Base Class"<<endl;
		}
		void show(){
			cout<<"show method of Base class"<<endl; 
		}
};

class DerivedClass:public BaseClass{
	public:
		void Display(){
					cout<<"Display method of Derived Class"<<endl;
		}
		void show(){
			cout<<"show method of Derived Class"<<endl; 
		}
		
};
int main(){
	DerivedClass D;
	BaseClass *B;
	
	B=new BaseClass;
	
	B->Display();
	B->show();
	
	B=&D;
	
	B->Display();
	B->show();
	
	return 0;
	}
