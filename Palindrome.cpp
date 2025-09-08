#include <iostream>
#include <cstring>
#include <cstdlib>
#include <cctype>
#include <cmath>
using namespace std;

int main(){
	//defines input cstring
	char text[80];
	cout << "Enter text: ";
	cin.get(text,80);
	cin.get();
	//defines filteredText cstring
	char filteredText[80];
	//adds all non special characters from text to filteredText
	int indexToReplace = 0;
	for (int i=0; i < strlen(text); i++){
		if ((isalnum(text[i]))){
			filteredText[indexToReplace] = text[i];
			indexToReplace += 1;
		}
	}
	//adds the special ending for all cstrings
	filteredText[indexToReplace] = '\0';
	//sets all characters (not numbers) in filteredText to lowercase
	for (int i=0; i < strlen(filteredText); i++){
		if (not(isdigit(filteredText[i]))){
			filteredText[i] = tolower(filteredText[i]);
		}
	}

	cout << "filteredText: " << filteredText << endl;
	//checks if filteredText is a palindrome:
	bool isPallindrome = true;
	for (int i=0; i < floor(strlen(filteredText)/2); i++){ //basically compares the first character with the last, second to second last, etc.
		if (not(filteredText[i] == filteredText[strlen(filteredText)-i-1])){ //if they aren't the same, the word isn't a palindrome
			isPallindrome = false;	
		}
	}
	//prints out if it is a palindrome
	if (isPallindrome){
		cout << "Palindrome!";
	}
	else{
		cout << "Not a palindrome.";
	}

	return 0;
}
