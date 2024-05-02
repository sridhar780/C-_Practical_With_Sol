//13.Write a program to implement the virtual concepts for the following concepts
//a.Constructor
//b.Destructor
#include<iostream>
using namespace std;
class A{
	public:
		A(){
			virtual A(){
			}
		void display(){
			cout<<"display method of defauct constructor "
		}
		}
		 
};
class B:class A{
	A(){
	
	}
	
};
int main(){
	A a;
	a.display();
}

