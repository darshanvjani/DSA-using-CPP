#include<iostream>
#include<cmath>

using namespace std;
int add(int a,int b){
    return a+b;
}
int main(){
    int num;
    cout<<"| THE FIBONACCI SEQUENCE |"<<endl;
    cout<<"Enter at the final occurance where you want to end the sequence: ";
    cin>>num;
    int a = 0;
    int b = 1;
    int c;
    cout<<"0 1 ";
    for(int i=0;i<=num;i++){
        c = add(a,b);
        a=b;
        b=c;
        cout<<c<<" ";
    }

    return 0;    
}