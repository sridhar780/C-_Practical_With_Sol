//4 Write a program to implement the dynamic memory allocation and de-allocation using new and delete operators using class and object
#include<iostream>
using namespace std;
class Test{
	private:
		int num;
		float *ptr;
	public:
	     Test(){
	     	cout<<"Enter total no of students";
	     	cin>>num;
	     	
	     	ptr=new float[num];
	     	
	     	cout<<"Enter GPA of Students:"<<"\n";
	     	
	     	for(int i=0;i<num;++i)
	     	{
	     		cout<<"student"<<i+1<<":";
	     		cin>>*(ptr+i);
			 }
		 }	
		~Test(){
			delete[] ptr;
		}
		
		void Display(){
			cout<<endl<<"display GPA of Students"<<endl;
			for(int i=0;i<num;++i){
				cout<<"Student"<<i+1<<":"<<*(ptr+i)<<endl;
			}
		}
};
int main(){
	Test t;
	t.Display();
	return 0;
}
