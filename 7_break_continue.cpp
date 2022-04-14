#include<iostream>
using namespace std;

int main(){
    int days_in_month = 30;
    int total_money = 1000;
    for (int day = 1; day < days_in_month ; day++){
        if (day%2==0){
            cout<<"Cant go Out on "<<day<<"."<<endl;
            continue;
        }
        if (total_money==0){
            cout<<"OUT OF MONEY!"<<endl;
            break;
        }
        total_money -= 200;
        cout<<"Can go Out on "<<day<<"."<<endl;
    }
    return 0;
}