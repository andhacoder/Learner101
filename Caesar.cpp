#include <iostream>
#include <string>
#include <cctype>

using namespace std;
string Cipher(string plain_text, int key);

int main() {
    string plain_text; int key;
	cout<<"Enter plain text: ";
	cin>>plain_text;
	cout<<"Enter key ";
	cin>>key;
	key = key % 26;
	string Cipher_text = Cipher(plain_text , key);
	cout<<"Cipher text is: "<<Cipher_text;
	
}
string Cipher(string plain_text, int key){
    int length = plain_text.length();
	for(int i=0;i<length;i++){
	    if(isupper(plain_text[i])){
	        plain_text[i] += key;
	    }
	    if(islower(plain_text[i])){
	        plain_text[i] += key;
	    }
	}
	
	return plain_text;
}
