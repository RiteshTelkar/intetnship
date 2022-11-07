// program to check eligibility of a voter 
#include<iostream>
using namespace std;

void eligible(int age ){
	if(age>=18&&age<=100){
		cout<<"you are eligible for voting ";
	}
	else{
		cout<<"you are not eligible ";
	}
}

int main(){
	int age;
	cout<<"enter age "<<endl;
	cin>>age;
	if(age<0){
		cout<<"Invalid input ";
	}
	else{
		eligible(age);
	}
	return 0;
}
