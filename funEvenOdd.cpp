// function to show whether a number is even or odd
#include<iostream>
using namespace std;
void evenOdd(int n){
	if(n%2==0){
		cout<<n<<" is even "<<endl;
	}
	else{
		cout<<n<<" is odd "<<endl;
	}
}

int main(){
	int n;
	cout<<"enter a positive number ";
	cin>>n;
	evenOdd(n);
	return 0;	
}
