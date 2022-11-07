// program to print maximum and  minimum of three numbers 
#include<iostream>
using namespace std;

int maximum(int a,int b,int c){
	return (a>b&&a>c)?a:(b>c?b:c);
}

int minimum(int a,int b,int c){
	return (a<b&&a<c)?a:(b<c?b:c);
}

int main(){
	int a,b,c;
	cout<<"enter three integer values ";
	cin>>a>>b>>c;
	cout<<"the maximum number is "<<maximum(a,b,c)<<endl;
	cout<<"the minimum number is "<<minimum(a,b,c)<<endl;
	return 0;
}
