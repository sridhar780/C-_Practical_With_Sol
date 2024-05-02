//7.Write aprogram using friend functions and friend class
#include<iostream>
using namespace std;
class Friendclass{
	private:
		int code;
	public:
		Friendclass(){
        code=0;			
		}
	void printMember(){
		cout<<"Code is"<<code<<endl;
	}
	friend void friendfun(Friendclass obj);
	friend class SecondClass;
}; 
void friendfun(Friendclass obj){
	cout<<"using access code "<<obj.code<<endl;
}
class SecondClass{
	public:
		void changeCode(Friendclass& myclass,int x){
			cout<<"Using friend class changecode";
			myclass.code=x;
		}
};

int main(){
	Friendclass fs;
	SecondClass Sc;
	fs.printMember();
	Sc.changeCode(fs,10);
	fs.printMember();
	friendfun(fs);
	
}
