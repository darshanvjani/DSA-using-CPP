#include<iostream>
#include<cmath>

using namespace std;

int isprime(int x){
    bool flag=0;
    for(int i=2;i<=sqrt(x);i++){
        if(x%i==0){
            flag = 1;
            return false;
            break;
        }
    }
    if (flag==0){
        return true;
    }
}

int main(){
    int a,b;
    cout<<"Enter two number: ";
    cin>>a>>b;
    for(int i=a;i<=b;i++){
        if (isprime(i)){
            cout<<i<<" ";
        }
    }
    return 0;
}
