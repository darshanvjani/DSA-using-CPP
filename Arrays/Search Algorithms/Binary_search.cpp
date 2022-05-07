#include<iostream>
#include<climits>
using namespace std;

int binary_search(int arr[],int n,int number){

    int s=0;
    int e=n;
    while(s<=e){
        int mid = (s+e)/2;
        if (arr[mid] == number){
            return mid;
        }
        else if(arr[mid] < number){
            s = mid + 1;
        }
        else{
            e = mid - 1;
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

    cout<<"Index of the number is: "<<binary_search(arr,n,number);
    return 0;
    
}