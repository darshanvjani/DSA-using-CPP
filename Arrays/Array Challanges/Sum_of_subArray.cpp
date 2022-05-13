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

    for (int i=0;i<n;i++){
        int sum = 0;
        for (int j=i;j<n;j++){
            sum+=arr[j];
            cout<<"Subarray sum is: "<<sum<<endl;
        }
        
    }

}