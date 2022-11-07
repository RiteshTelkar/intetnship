//program to find frequency of digit of a number 
#include<iostream>
using namespace std;
int main(){
	int n,count;
	cout<<"enter a number ";
	cin>>n;
	for(int i=0;i<10;i++){
		cout<<"the frequency of "<<i<<" = ";
		count=0;
		for(int j=n;j>0;j/=10){
			if(j%10==i){
				count++;
			}
		}
		cout<<count<<endl;
		
	}
	return 0;
}
