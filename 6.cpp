//6.Write a program to implement copy constructor
#include<iostream>
using namespace std;
class copycon{
	private:
		int a;
		float b;
		char c;
	public:
		copycon(int x,float y,char z);
		copycon(copycon &p);
		void display();
};
copycon::copycon(int x,float y,char z)
{
	cout<<"parameterized constructor called"<<endl;
	a=x;
	b=y;
	c=z;
}
void copycon::display(){
	cout<<"a="<<a<<"b="<<b<<"c="<<c<<endl;
}
copycon::copycon(copycon &p){
	cout<<"copy constructor called"<<endl;
	a=p.a;
	b=p.b;
	c=p.c;
	
}
int main(){
	copycon obj1(10,20.33,'s');
	copycon obj2(obj1);
	cout<<endl<<"obj1 data values"<<endl;
	obj1.display();
	cout<<endl<<"obj2 data values"<<endl;
	obj2.display();
	
	return 0;
}
