#include<iostream>
#include<climits>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of the array: "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the digits in array: "<<endl;
    
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }
    int max_no=INT_MIN;
    int min_no=INT_MAX;

    for (int i=1;i<=n;i++){
        max_no = max(max_no,arr[i]);
        min_no = min(min_no,arr[i]);
    }

    cout<<"Max No = "<<max_no<<endl;
    cout<<"Min No = "<<min_no<<endl;

    return 0;
}