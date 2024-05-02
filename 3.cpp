//Write a program to read the student name,roll no,marks and display the object
#include<iostream>
using namespace std;
class student{
	private:
		int Rollno;
		char Name[30];
		float Marks;
	public:
		void getInfo();
		void display();
};
void student::getInfo(){
	cout<<"Enter Roll No ";
	cin>>Rollno;
	cout<<"ENter Name";
	cin>>Name;
	cout<<"Enter Marks";
	cin>>Marks;
}
void student::display(){
	cout<<"Roll No is:"<<Rollno<<endl;
	cout<<"Name is:"<<Name<<endl;
	cout<<"Marks is:"<<Marks<<endl;
}
int main(){
	student s1;
	s1.getInfo();
	s1.display();
	return 0;
}
