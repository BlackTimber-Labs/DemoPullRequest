#include <iostream>
#include <string>
using namespace std;

string change_letter(string str) {

	int char_code;
	
	for (int x = 0; x < str.length(); x++)
	{
		char_code = int(str[x]);

		if (char_code == 122)
		{
			str[x] = char(97);
		}
		else if (char_code == 90)
		{
			str[x] = char(65);
		}
		else if (char_code >= 65 && char_code <= 90 || char_code >= 97 && char_code <= 122)
		{
			str[x] = char(char_code + 1);
		}
	
	}

	return str;
}

int main() 
{
	cout << "Original string: w3resource"; 
	cout << "\nNew string: " << change_letter("w3resource");
	cout << "\n\nOriginal string: Python"; 
	cout << "\nNew string: " << change_letter("Python");
	return 0;
}
