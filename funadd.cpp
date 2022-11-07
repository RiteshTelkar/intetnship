//program to print sum of two numbers 
#include<iostream>
using namespace std;
int add(int x,int y)
{
	cout<<" the addition is "<<(x+y)<<endl;
}
int main()
{
	int a,b;
	cout<<" enter two number "<<endl;
	cin>>a>>b;
	add(a,b);
	
	return 0;
}
