//9b.Operator overloading
#include<iostream>
using namespace std;
class Rectangle{
	int L,B;
	public:
		Rectangle(){
			L=0;
			B=0;
		}
	Rectangle(int x,int y){
		L=x;
		B=y;
		
	}
	Rectangle operator+(Rectangle Re){
		Rectangle R;
		R.L=L+Re.L;
		R.B=B+Re.B;
		return R;
	}	
	void operator++(){
		L+=1;
		B+=1;
		
	}
	void operator--(){
		L-=1;
		B-=1;
	}
	void Display(){
		cout<<"Length"<<L<<"Breath"<<B<<endl;
	}
};
int main(){
	Rectangle R1(2,5),R2(3,4),R3;
	
	cout<<"Rectangle 1"<<endl;
	R1.Display();
   
    cout<<"Rectangle 2"<<endl;
	R2.Display();
	
	R3=R1+R2;
	cout<<"Rectangle 3"<<endl;
	R3.Display();
	
	cout<<endl<<"length & breadth before increment"<<endl;
	R1.Display();
	
	++R1;
	cout<<endl<<"length & breadth after increment"<<endl;
	R1.Display();
		
		cout<<endl<<"length & breadth before decrement"<<endl;
	R1.Display();
	
	--R1;
	cout<<endl<<"length & breadth after decrement"<<endl;
	R1.Display();
	
	return 0;	
	
}
