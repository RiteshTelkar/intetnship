//program to reverse a number 
#include<iostream>
using namespace std;
int main(){
	int num,rem,reverse=0;
	cout<<"enter a number ";
	cin>>num;
	int n=num;
	while(n!=0){
		rem = n%10;
		reverse = (reverse*10)+rem;
		n = n/10;
	}
	cout<<"Reverse of "<<num<<" is "<<reverse<<endl;
	return 0;
}
