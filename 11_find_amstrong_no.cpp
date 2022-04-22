#include<iostream>

using namespace std;

int main(){
    int num,amstrongno=0;
    cout<<"Enter a number: ";
    cin>>num;
    int temp;
    temp = num;
    while (temp>0){
        int decimalno;
        decimalno = temp % 10;
        amstrongno += decimalno*decimalno*decimalno;
        temp = temp / 10;
    }
    if (amstrongno == num){
        cout<<"It is an Amstrong Number!";
    }else{
        cout<<"It is not an Amstrong Number!";
    }
    return 0;

}