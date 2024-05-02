//Program to print the sum o f digits of given number
#include<iostream>
using namespace std;
int main(){
	int val,no,sum=0;
	cout<<"Enter the number:";
	cin>>val;
	no=val;
	while(no!=0){
		sum=sum+no%10;
		no=no/10;
	}
	cout<<"The sum of the digits of"<<val<<"is"<<sum;
}
