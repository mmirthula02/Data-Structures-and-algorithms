#include <iostream>
using namespace std;

int main(){
	char c;
	int isLowercaseVowel , isUppercaseVowel;
	cout<<"Enter an alphabet : "<<endl;
	cin>>c;
	
	isLowercaseVowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
	isUppercaseVowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
	
	if(!isalpha(c))                                          //isalpha checks whether if the input entered by the user is an alphabet or not
		cout<<"Error!Please enter an alphabet";
	else if(isLowercaseVowel||isUppercaseVowel)
		cout<<c<<" is a vowel";
	else
		cout<<c<<" is a consonant";
	
	return 0;
	
	
	
	
	
}


