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
    int n,r;
    cout<<"Enter n and r: ";
    cin>>n>>r;
    cout<<"N: "<<n<<endl;
    cout<<"R: "<<r<<endl;
    cout<<factorial(n)/(factorial(r)*factorial(n-r));
    return 0;
}