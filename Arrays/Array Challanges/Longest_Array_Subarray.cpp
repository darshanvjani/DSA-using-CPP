#include<iostream>
#include<climits>
using namespace std;

int main(){
    int n,number,curr_v,prev_v,longest_subarr_no=2,curr_long=2;
    cout<<"Enter The Size of Array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter number to story in array"<<endl;

    for (int i=0;i<n;i++){
        cin>>arr[i];
    }

    curr_v = arr[0] - arr[1];
    prev_v = curr_v;
    for (int i=1;i<n-1;i++){
        curr_v = arr[i] - arr[i+1];
        if (prev_v == curr_v){
            curr_long++;
        }else{
            prev_v = curr_v;
            if (curr_long>longest_subarr_no){
                longest_subarr_no = curr_long;
            }
            curr_long = 2;
        }
    }
    if (curr_long>longest_subarr_no){
        cout<<"Longest Sub Array is: "<<curr_long;
    }else{
        cout<<"Longestl8 Sub Array is: "<<longest_subarr_no;
    }

}
