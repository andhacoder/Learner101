#include <iostream>

using namespace std;
void PrintBinary(int n);

int main() {
    int num;
	cout<<"Enter the number ";
	cin>>num;
	PrintBinary(num);
}
void PrintBinary(int n){
    if(n == 0)
    PrintBinary(-n);
    else if(n < 2)
        cout<< n;
    else{
        int last_digit = n % 2;
        int rest_digit = n / 2;
        PrintBinary(rest_digit);
        cout<<last_digit;
    }
}
