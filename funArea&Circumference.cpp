#include<iostream>
using namespace std;
#define pi 3.14

float circumference(float r){
	return 2*pi*r;	
}

float area(float r){
	return r*r;
}

int main(){
	int radius;
	cout<<"enter the radius ";
	cin>>radius;
	cout<<"the circumference is "<<circumference(radius)<<endl;
	cout<<"the area is "<<area(radius)<<endl;
	return 0;
}
