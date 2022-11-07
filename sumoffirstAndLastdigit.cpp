// program to print the sum of first and last digit of a number 
#include<iostream>
using namespace std;

int main(){
	int n,sum ,rev =0;
	cout<<"enter a number "<<endl;
	cin>>n;
	int last_digit = n%10;
	while(n>0){
		int k = n%10;
		rev = (rev*10) + k;
		n/=10;
	}
	
	int first_digit = rev%10;
	sum = last_digit+ first_digit;
	cout<<"the sum of first and last digit is "<<sum;
	return 0;
	
}
