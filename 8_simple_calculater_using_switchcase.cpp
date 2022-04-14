#include<iostream>
using namespace std;

int main(){
    float a,b;
    char op;
    cout<<"Enter two number";
    cin>>a>>b;
    cout<<"Enter the operation";
    cin>>op;

    switch (op)
    {
    case '+':
        cout<<a+b;
        break;
    case '-':
        cout<<a-b;
        break;
    case '*':
        cout<<a*b;
        break;
    case '/':
        cout<<a/b;
        break;    
    default:
        cout<<"wut (~\\*-*//~)";
        break;
    }
return 0;
}