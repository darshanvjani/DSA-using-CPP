#include<iostream>
using namespace std;

// for loop
// int main(){
//     int number;
//     cout << "Enter the number of time youy want me to say Hello." << endl;
//     cin >> number;

//     for (int i = 0; i < number; i++)
//     {
//         cout << "Hello. " <<endl;
//     }
//     return 0;
// }

//while loop
int main(){
    int number;
    cout << "Enter a less than 10" << endl;
    cin >> number;
    while (number <= 10){
        cout << number << endl;
        number++;
    }
    return 0;
}

