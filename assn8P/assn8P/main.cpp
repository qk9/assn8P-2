#include <iostream>
#include <cstring>
using namespace std;

int LastIndexOf(const char* inString, char target);
void reverse(char* inString);
int replace(char* inString, char target, char replacementChar);
bool isPalindrome(const char* inString);
void toupper(char* inString);
int numLetters(const char* inString);

int main() {
	char str1[22] = "abcdefg acdefg acdefg";
	char str2[10] = "hijklmnop";
	char str3[11] = "qrstuvwxyz";

	// test LastIndexOf with multiple occurrences
	cout << "last index of g in str1 is " << LastIndexOf(str1, 'g') << "; should be 20" << endl;
	// test LastIndexOf with one occurrence
	cout << "last index of b in str1 is " << LastIndexOf(str1, 'b') << "; should be 1" << endl;
	// test LastIndexOf with no occurrences
	cout << "Last index of h in str1 is " << LastIndexOf(str1, 'h') << "; should be -1" << endl << endl;

	// test reverse with string of even length
	cout << str2 << " reversed is ";
	reverse(str2);
	cout << str2 << endl;
	// test reverse with string of odd length
	cout << str3 << " reversed is ";
	reverse(str3);
	cout << str3 << endl << endl;

	// test replace with multiple replacements
	cout << "all c in " << str1 << " will be replaced with #." << endl;
	cout << replace(str1, 'c', '#') << " replacements made." << endl;
	cout << "now the string is " << str1 << endl;
	// test replace with one replacement
	cout << "all b in " << str1 << " will be replaced with @." << endl;
	cout << replace(str1, 'b', '@') << " replacements made." << endl;
	cout << "now the string is " << str1 << endl;
	// test replace with no replacements
	cout << "all h in " << str1 << " will be replaced with *." << endl;
	cout << replace(str1, 'h', '*') << " replacements made." << endl;
	cout << "now the string is " << str1 << endl;
	


	return 0;
}






// returns the index of the last occurrence of target in inString.
// returns -1 if target does not occur in inString.
int LastIndexOf(const char* inString, char target) {
	int i = 0;
	int index = -1;
	while (inString[i] != '\0') {
		if (inString[i] == target) {
			index = i;
		}
		i++;
	}
	return index;
}






// reverses the order of the characters in inString.
void reverse(char* inString) {
	char temp;
	int len = strlen(inString);
	for (int i = 0; i < len / 2; i++) {
		temp = inString[i];
		inString[i] = inString[len - i - 1];
		inString[len - i - 1] = temp;
	}
}






// replaces all occurrences of target in inString with replacementChar.
// returns the number of replacements made.
int replace(char* inString, char target, char replacementChar) {
	int replacements = 0;
	int i = 0;
	while (inString[i] != '\0') {
		if (inString[i] == target) {
			inString[i] = replacementChar;
			replacements++;
		}
		i++;
	}
	return replacements;
}
