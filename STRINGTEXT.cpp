#include <iostream>
#include <string>
using namespace std;
char* createArr(string);
string check(string, char*);
// 19:59

int main() {
	string text;
	cout << " enter your text " << endl;
	getline(cin, text);
	char* chars = createArr(text);
	cout << check(text, chars);
}

char* createArr(string text) {
	char* chars = new char[text.length()];
	for (int i = 0; i < text.length(); i++) {
		chars[i] = text[i];
	}
	return chars;
}

string check(string text, char* chars) {
	string newText;
	int i = 0;
	while (i < text.length() && chars[i] != '.') {
		if (chars[i] == 32) newText += chars[i];
		else if (chars[i] > 47 && chars[i] < 58) newText += chars[i];
		else if (chars[i] > 64 && chars[i] < 91) newText += chars[i];
		else if (chars[i] > 96 && chars[i] < 123) newText += chars[i];
		else i++;
		i++;
	}
	return newText;
}