//16 Program to demonstrate the template (generic)concepts
//a.Without template class and object
//b.With template class and object 
#include<iostream>
using namespace std;
template<class T>
class sum{
	private:
		T n1,n2;
	public:
	sum(T x,T y){
		n1=x;
		n2=y;
	}	
	void display(){
		cout<<"num1"<<n1<<"\t num2"<<n2;
		cout<<"add is"<<add();
	}
	T add(){
		return n1+n2;
	}
};

int main(){
	sum<int> intsum(2,4);
	sum<float> floatsum(2.2,1.2);
	cout<<"result"<<endl;
	
	intsum.display();
	cout<<"float result"<<endl;
	floatsum.display();
	
	return 0;
}
