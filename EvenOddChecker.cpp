/* Input a number from user and display whether it’s odd or even..*/


#include<iostream>
using namespace std;
int main(){
	
	int num=0;
	
	cout<<"Enter a number: ";
	cin>>num;
	
	if(num%2==0)
	{
		cout<<"This is even number";
	}
	else{cout<<"This is odd number";}
} 

