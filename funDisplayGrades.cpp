// program to display grade 
#include<iostream>
using namespace std;

void displayGrades(int marks ){
	if(marks>=91 && marks <=100){
		cout<<" grade is AA "<<endl;
	}
	else if(marks>=81 && marks<=90){
	    cout<<"grade is AB \n";	
	}
	else if(marks>=71 && marks<=80){
		cout<<"grade is BB \n";
	}
	else if(marks>=61 && marks<=70){
		cout<<"grade is Bc \n";
	}
	else if(marks>=51 && marks<=60){
		cout<<"grade is CD \n";
	}
	else if(marks>=41 && marks<=50){
		cout<<"grade is DD \n";
	}
	else {
		cout<<"Fail\n";
	}
} 

int main(){
	int marks;
	cout<<"enter marks out of 100\n";
	cin>>marks;
	displayGrades(marks);
	return 0;
}
