#include<iostream>
#include<climits>
using namespace std;

int main(){
    int n,number;
    cout<<"Enter The Size of Array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter number to story in array"<<endl;

    for (int i=0;i<n;i++){
        cin>>arr[i];
    }

    /*Bubble Sorting Algorithm*/
    for (int i=0;i<n;i++){
        for (int j=0;j<n-i;j++){
            if (arr[j]>arr[j+1]){
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}