#include<iostream>

using namespace std;

int main(){
    int num;
    int reversenum=0;
    cout<<"Enter a number: ";
    cin>>num;

    while (num>0){
        int lastnum;

        lastnum = num%10;
        reversenum = reversenum*10 + lastnum;
        num = num/10;
    }
    cout<<reversenum;
    return 0;
}