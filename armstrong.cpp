//program to check whether a number is armstrong or not
#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n,sum=0;
    cout<<"enter a number ";
    cin>>n;
    int k =n;
    while(n!=0){
        int rem = n%10;
        sum = sum + pow(rem,3);
        n = n/10;
    }
    if(k == sum ){
        cout<<k<<" is armstrong number \n";
    }
    else {
        cout<<k<<" is not armstrong number \n";
    }
}
