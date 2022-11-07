// program to return product of two numbers 
#include<iostream>
using namespace std;

int product(int a,int b){
	return a*b;
}

int main(){
	int a,b;
	cout<<"enter two values "<<endl;
	cin>>a>>b;
	cout<<"the product is "<<product(a,b);
	return 0;
}
