// Exersise 8.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	cout << "Please Enter a integer (such as 1,6,8, etc)\n"; 
	int integer;
	cin >> integer;


	if (0 == integer % 2) {

		cout << " The value " << integer << " is even ";
	}
	else {
		cout << " The value " << integer << " is odd ";

	}
}

