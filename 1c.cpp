//1C.program to print prime numbers from 2 to n where n is a naturan number given
#include<iostream>
using namespace std;
int main(){
	int n,i,j,prime;
	cout<<"Enter a number";
	cin>>n;
	cout<<"prime number from 2 to n"<<n<<"are :";
	for(i=2;i<=n;i++){
		prime=1;
		for(j=2;j<=i/2;j++){
			if(i%j==0){
				prime=0;
				break;
			}
		}
		if(prime==1){
			cout<<i<<" ";
			
		}
		
	}
	return 0;
}
