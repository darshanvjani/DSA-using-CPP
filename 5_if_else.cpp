#include<iostream>
using namespace std;

int main()
{
    int number;
    cout << "Enter a number:" << endl;
    cin >> number;

    if (number > 10){
        cout << "Valid!" << endl;
    } else if ((number >= 5) && (number <= 10) ){
        cout << "Semi Valid!" << endl;
    } else if (number < 5){
        cout << "Number is Invalid!" << endl;
    }
    return 0;
}
