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
    cout<<"Enter a number: ";
    cin>>num;
    for (int i = 0;i<num;i++){
        for (int j = 0;j<=i;j++){
            cout<<factorial(i)/(factorial(i-j)*factorial(j))<<" ";
        }
        cout<<endl;
    }
    return 0;
}