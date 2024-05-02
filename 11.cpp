//11.Write a program to implement the overloaded constructors in inheritance

#include<iostream>
using namespace std;
class Cons{
	private:
		int a,b,c;
	public:
		Cons();
		Cons(int x,int y,int z);
	
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
		
		void Cons::display()
		{
			cout<<"a="<<a<<"b="<<b<<"c="<<c<<endl;
		}
class Cons1:public Cons{
	public:
		Cons1():Cons(){
		}
        Cons1(int x,int y,int z):Cons(x,y,z){
		}		
};		

int main(){
	Cons1 obj1;
	cout<<"obj1 data values"<<endl;
	obj1.display();
    
     int a=10,b=20,c=30;
    Cons1 obj2(a,b,c);
	cout<<"obj2 data values"<<endl;
	obj2.display();
	
	 return 0;
}
