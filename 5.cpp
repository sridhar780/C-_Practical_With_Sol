//5.Write a program to find area of a rectangle,circle and square using constructors
#include<iostream>
using namespace std;
#include<math.h>
class Area{
	private:
		float l,b,r;
	public:
		Area(float rr);
		Area(float bb,float hh);
		Area(float aa,float bb,float cc);
};
Area::Area(float rr){
	float area;
	r=rr;
	l=0;
	b=0;
	area=3.14*r*r;
	cout<<"Area of Circle"<<area<<endl;
}
Area::Area(float bb,float hh){
	float area;
	r=0;
	l=bb;
	b=hh;
	area=l*b;
	cout<<"Area of Rectangle="<<area<<endl;
}
Area::Area(float aa,float bb,float cc){
	r=aa;
	b=bb;
	l=cc;
	float area;
	float s;
	s=(aa+bb+cc)/2;
	area=sqrt(s*(s-aa)*(s-bb)*(s-cc));
	cout<<"Area of Triangle="<<area<<endl;
	
}
int main(){
	float r,l,b;
	cout<<"Enter length and breadth of Rectangle";
	cin>>l>>b;
	Area obj1(l,b);
	cout<<"Enter radius of circle";
	cin>>r;
	Area obj2(r);
	cout<<"Enter sides of Triangle:";
	cin>>l>>b>>r;
	Area obj3(l,b,r);
	
	return 0;
}
