//product of digit
#include<iostream>
using namespace std;

int main()
{
	int n,r,product=1;
	cout<<"enter a number ";
	cin>>n;
	int num =n;
	while(n!=0){
		r = n%10;
		product = product*r;
		n = n/10;
	}
	cout<<"the product of the digit of "<<num<<" is "<<product;
	return 0;
}
