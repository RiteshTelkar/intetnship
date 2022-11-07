//program to find sum of the series 1+11+111+1111...+n terms
#include<iostream>
using namespace std;
int main(){
	int n,term=1,sum=0,i;
	cout<<"enter the number upto u want to print numbers ";
	cin>>n;
	for(i=0;i<n;i++){
	
		cout<<term<<" ";
		if( i<n){
			cout<<" + ";
		}
		sum = sum + term;
		term = (term*10)+1;
	}
	cout<<endl;
	cout<<"the sum of terms is "<<sum;
	return 0;
}
