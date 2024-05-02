//2.Write a program to find largest and smallest elements in a given list of numbers and sort the given list
#include<iostream>
using namespace std;
int main(){
	int arr[10],n,i,j,small,large,temp;
	cout<<"Enter no of elements ";
	cin>>n;
	for(i=0;i<n;i++){
	
		cout<<"Enter element"<<i+1<<":";
		cin>>arr[i];
		
}
	

	 
for(i=0;i<n;i++){
	for(j=0;j<n;j++){
		if(arr[j]>arr[j+1]){
			temp=arr[j];
			arr[j]=arr[j+1];
			arr[j+1]=temp;
		}
	}
}
cout<<"Largest no"<<arr[9]<<"\n Smallest no"<<arr[0]<<"\n";
cout<<"\n Data after sorting";
for(i=0;i<n;i++){
	cout<<arr[i]<<"\t";
}
return 0;
}


