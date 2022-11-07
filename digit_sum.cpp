//program to print sum of digits of a number 
#include<iostream>
using namespace std;

int main(){
	int n,sum=0;
	cout<<"enter a number "<<endl;
	cin>>n;
	while(n>0)
	{
		int k = n%10;
		sum = sum + k;
		n = n/10;
	}
	cout<<"the sum of digit is "<<sum<<endl;
	return 0;
}
