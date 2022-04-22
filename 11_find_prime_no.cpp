#include<iostream>
#include<cmath>

using namespace std;

int main(){
    int num;
    bool flag;
    cout<<"Enter a number: ";
    cin>>num;

    for(int i=2;i<=sqrt(num);i++){
        if(num%i==0){
            cout<<"None Prime Number!";
            flag=1;
        }
    }
    if (flag==0){
        cout<<"Prime Number! ";
    }
    

}