//9. Write a program to implement the following concepts using class and object
//a.Function overloading
//b.Operator overloading
#include<iostream>
using namespace std;
#include<string.h>
class Display{
	int i;
	float f;
	char c[10];
	public:
		void print(int x){
			i=x;
			cout<<"printing int"<<i<<endl;
			
		}
		void print(double y){
			f=y;
			cout<<"printing float"<<f<<endl;
		}
		void print(char* z){
			strcpy(c,z);
			cout<<"printing character"<<c<<endl;
			
		}
}; 
int main(){
	Display pd;
	pd.print(5);
	pd.print(5000.434);
	pd.print("SSDC");
	return 0;
}
