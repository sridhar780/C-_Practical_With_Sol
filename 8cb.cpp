#include<iostream>
//b.Define the Constructor inside/utside of the class
using namespace std;
class Cons{
	private:
		int a,b,c;
	public:
		Cons();
		Cons(int x,int y,int z);
		Cons(Cons &p);
		void display();
		};
	Cons::Cons(){
			cout<<"default Constructor "<<endl;
			a=0;
			b=0;
			c=0;
		}
		Cons::Cons(int x,int y,int z){
			cout<<"parameterized constructor"<<endl;
			a=x;
			b=y;
			c=z;
		}
			Cons::Cons(Cons &p){
			cout<<"copy constructor "<<endl;
			a=p.a;
			b=p.b;
			c=p.c;
		}
	
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
