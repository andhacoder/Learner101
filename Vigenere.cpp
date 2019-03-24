#include <iostream>
#include <string>
#include <cctype>

using namespace std;
string Cipher(string plain_text,int key_length, int key[]);

int main() {
    string plain_text; string key;
    // Taking input
	cout<<"Enter plain text: ";
	cin>>plain_text;
	cout<<"Enter key ";
	cin>>key;
	int key_length = key.length();
	
	//converting smaller key to upper key
	for(int i = 0; i < key_length; i++){
	    if (islower(key[i]))
	    key[i] = key[i] - 32;
	}
	//converting string key to integer key
    int new_key[key_length];
	for(int i = 0; i < key_length; i++){
	    new_key[i] = key[i] - 65;
	}
	string Cipher_text = Cipher(plain_text , key_length, new_key);
	cout<<"Cipher text is: "<<Cipher_text;
	
}


string Cipher(string plain_text, int key_length, int key[]){
    int length = plain_text.length();
	for(int i=0;i<length;i++){
	    int j = i % key_length;
	    plain_text[i] = plain_text[i] + key[j];
	   }
	    
	
	return plain_text;
}
