#include <iostream>
#include <string>

using namespace std;
bool isPalindrome(string s);

int main() {
	string s;
	cout<<"Enter a string ";
	cin>>s;
	if (isPalindrome(s) == true)
	    cout<<"String is Palindrome";
	else cout<<"String is not Palindrome";
	
}
bool isPalindrome(string s){
    if(s.length() < 2)
        return true;
    else if (s[0] == s[s.length() - 1]){
            s = s.substr(1,s.length() - 2);
            return isPalindrome(s);
        }
    else return false ;
            
    }
