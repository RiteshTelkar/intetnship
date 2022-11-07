// program to convert binary to decimal 
#include<iostream>
#include<math.h>
using namespace std;

int main(){
	int bi,rem,final=0;
	cout<<"enter a binary ";
	cin>>bi;
	int i=0;
	while(bi!=0){
		rem = bi%10;
		final = final+rem*pow(2,i);
		bi /= 10;
		i++;	
	}
	cout<<"the required decimal number is "<<final;
	return 0;
}
