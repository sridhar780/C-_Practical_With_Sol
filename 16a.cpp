//16 //a.Without template class and object
#include<iostream>
using namespace std;
class sum{
	private:
		int n1,n2;
	public:
	sum(int x,int y){
		n1=x;
		n2=y;
	}	
	void display(){
		cout<<"num1"<<n1<<"\t num2"<<n2;
		cout<<"add is"<<n1+n2;
	}
   
};

int main(){
	sum s(2,4);
	sum s1(2.2,1.2);
	cout<<"result"<<endl;
	
	s.display();
	cout<<"float result"<<endl;
	s1.display();
	
	return 0;
}
