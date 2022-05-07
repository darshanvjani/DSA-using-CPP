#include <iostream>
#include <cmath>

using namespace std;

int factorial(int n){
    int temp = 1;
    for (int i=n;i>=1;i--){
        temp = i * temp;
        // cout<<"Temp: "<<temp;
    }
    return temp;

}

int main(){
    int num;
    cout<<"Enter a number";
    cin>>num;
    cout<<factorial(num);
    return 0;
}