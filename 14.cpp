//14. Write a program to demonstrate static polymorphism using method overloading
#include<iostream>
using namespace std;
void Area(int r){
	float area=3.14*r*r;
	cout<<"Area of circle"<<area;
	cout<<endl;
}
void Area(int l,int b){
	int area=l*b;
	cout<<"Area of Rectangle is"<<area;
}
void Area(float l,int b){
	float area=l*b;
	cout<<"area of Rect float and int"<<area;
}
void Area(int l,float b){
	float area=l*b;
	cout<<"area of Rect  int and float"<<area;
}
int main(){
	int a=5,b=3;
	float c=2.1;
	Area(a);
	Area(a,b);
	Area(a,c);
	Area(c,a);
	
	return 0;
}
