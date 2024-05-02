#include<iostream>
using namespace std;
class Base{
	public:
		Base(){
			cout<<"Constructor Base"<<endl;
		}
	virtual ~Base(){
		cout<<"Destructor Base"<<endl;
	}	
};
class derived:public Base
{
	public:
		derived(){
			cout<<"Constructor Derived"<<endl;
		}
	   ~derived(){
	   	cout<<"Destructor Derived"<<endl;
	   }	
};

int main(){
	derived *d=new derived();
	Base *b=d;
	delete b;
}
