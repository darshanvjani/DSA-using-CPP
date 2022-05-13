#include<iostream>
#include<climits>
using namespace std;

int main(){
    int n,number,cmax;
    cout<<"Enter The Size of Array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter number to story in array"<<endl;

    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    cmax = arr[0];
    for (int i=1;i<n;i++){
        if (arr[i]>cmax){
            cmax = arr[i];
            cout<<arr[i]<<" "<<cmax<<endl; 
        }else{
            cout<<arr[i]<<" "<<cmax<<endl;
        }
    
    }
    cout<<"Max Number is "<<cmax;
    return 0;
}