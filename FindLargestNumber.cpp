#include <iostream>
using namespace std;

int main()
{
	float n1,n2,n3;

	cout << "Enter 3 number :" << endl;
	cin >> n1 >> n2 >> n3;

	if ( n1 >= n2 && n1 >= n3)
	{
		cout << "The largest is " << n1;
	}
	if ( n2 >= n1 && n2 >= n3)
	{
		cout << "The largest is " << n2;
	}
	if ( n3 >= n1 && n3 >= n2)
	{
		cout << "The largest is " << n3;
	}

	return 0;
}
	

