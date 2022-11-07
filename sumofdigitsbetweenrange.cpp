//program to find the number and sum of all integer between 100 and 200 divisible by 9
#include<iostream>
using namespace std;
int main(){
	int sum =0;
	cout<<"Number between 100 and 200 divisible by 9 and their sum\n";
	for(int i=101;i<200;i++){
		if(i%9==0){
			cout<<i<<" ";
			sum = sum +i;
		}
	}
	cout<<"\n";
	cout<<"The sum is "<<sum;
	return 0;
}
