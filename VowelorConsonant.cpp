#include <iostream>
using namespace std;

int main()
{
	char c;
	int isLower, isUpper;

	cout << "Enter a alphabet : " << endl;
	cin >> c;

	isLower = (c == 'a' || c == 'i' || c == 'u' || c == 'e' || c == 'o');
	isUpper = (c == 'A' || c == 'I' || c == 'U' || c == 'E' || c == 'O');

	if (isLower || isUpper)
		cout << c << " is a vower"<< endl;
	else
		cout << c << " is a consonant"<< endl;

	return 0;
} 
