#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	string str = "C++ Programming";
	char strt[] = "C++ Progamming is awesome";

	cout << "String Length = " << str.size() << endl;
	cout << "String Length = " << str.length() << endl;
	cout << "String Length = " << strlen(strt) << endl;

	return 0;
}
