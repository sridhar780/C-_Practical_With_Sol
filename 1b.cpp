//1(b).program to check whether the given number is Armstrong or not
#include<iostream>
using namespace std;
int main(){
	int digit,orgNum,num,sum=0;
	cout<<"Enter any number";
	cin>>orgNum;
	
	num=orgNum;
	
	while(num!=0){
		digit=num%10;
		sum+=digit*digit*digit;
		num/=10;
		
	}
	if(sum==orgNum){
		cout<<orgNum<<"is an Armstrong number";
	
	}
	else{
		cout<<orgNum<<"is not an Armstrong number";
		
	}

	return 0;
}
