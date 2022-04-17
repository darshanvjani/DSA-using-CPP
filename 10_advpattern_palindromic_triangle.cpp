#include<iostream>

using namespace std;

int main(){
    for(int k=1;k<=5;k++){
        int j,i;
        for(i=1;i<=5-k;i++){
            cout<<" ";
        }
        for(j=k;j<=5;j++){
            cout<<j<<" ";
        }
        for(;j<=5;j++){
            cout<<j++<<" ";
        }
    cout<<endl;
    }
}