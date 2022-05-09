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

    /*Sorting Algorithm*/
    for (int i=0;i<n-1;i++){
        for (int j=i+1;j<n;j++){
            if (arr[j]<arr[i]){
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
    /*Print the Sorted Array*/
    for (int i=0;i<n;i++){
        cout<<arr[i];
    }

}

