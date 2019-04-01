#include <iostream>

using namespace std;

int main() {
    float money; int count = 0;
    cout<<"Enter the amount in dollars ";
    cin>>money;
    while(money- 0.25 >= 0){
        money = money - 0.25;
        count++;
    }
    
    while(money- 0.10 >= 0){
        money = money - 0.10;
        count++;
    }
    
    while(money- 0.05 >= 0){
        money = money - 0.05;
        count++;
    }
    
    while(money- 0.01 >= 0.00){
        money = money - 0.01;
        count++;
    }
    
    cout<<"Minimum number of coins required are "<<count;
}
