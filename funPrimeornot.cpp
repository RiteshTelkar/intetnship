// program to check a number is prime of not 
#include<iostream>
using namespace std;

int isPrime(int n){
	for(int i=2;i<n;i++){
		if(n%i==0){
			cout<<n<<" is not prime\n ";
			return 0;
		}
	}
	cout<<n<<" is prime ";	
}

int main(){
	int  n;
	cout<<"enter a number ";
	cin>>n;
	isPrime(n);
	return 0;
}
