//8.Write a program to implement constructors
//a.default Constructor ,Parameterized Constructor,Copy Constructor
//b.Define the Constructor inside/utside of the class
//c.Implement all three constructors within a single class as well as use multiple classes(individual classes)
#include<iostream>
using namespace std;
class Cons{
	private:
		int a,b,c;
	public:
		Cons(){
			cout<<"default Constructor"<<endl;
			a=0;
			b=0;
			c=0;
		}
		Cons(int x,int y,int z){
			cout<<"parameterized constructor"<<endl;
			a=x;
			b=y;
			c=z;
		}
		Cons(Cons &p){
			cout<<"copy constructor "<<endl;
			a=p.a;
			b=p.b;
			c=p.c;
		}
			void display();
		};	
	
		void Cons::display()
		{
			cout<<"a="<<a<<"b="<<b<<"c="<<c<<endl;
		}

int main(){
	Cons obj1;
	cout<<"obj1 data values"<<endl;
	obj1.display();

    Cons obj2(10,20,30);
	cout<<"obj2 data values"<<endl;
	obj2.display();
	
	Cons obj3(obj2);
	cout<<"obj3 data values"<<endl;
	obj3.display();

  return 0;
}


