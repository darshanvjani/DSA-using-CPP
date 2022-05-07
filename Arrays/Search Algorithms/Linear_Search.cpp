#include<iostream>
#include<climits>
using namespace std;

int linear_search(int arr[],int n,int number){

    for(int i=0;i<n;i++){
        if (arr[i] == number){
            return i;
        }

    }
    return -1;
    
}

int main(){

    int n,number;

    cout<<"Enter The Size of Array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter number to story in array"<<endl;

    for (int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"Enter the number to find: "<<endl;
    cin>>number;

    cout<<"Index of the number is: "<<linear_search(arr,n,number);
    return 0;
    
}