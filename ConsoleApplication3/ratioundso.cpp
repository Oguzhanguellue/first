// ConsoleApplication3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "../../../std_lib_facilities.h"





int main()
{
	int val1;
	int val2;
	cout << "please enter two int values\n";
	cin >> val1;
	cin >> val2;
	if (val1 > val2)
		cout << val1 << " is bigger\n" << val2 << " is smaller\n";

	else
		if (val1 < val2)
			cout << val2 << " is bigger\n" << val1 << " is smaller\n";
		else;
		cout << "the sum is: " << val1 + val2 << "\n";
		cout << "the difference is: " << val1 - val2 << "\n";
		cout << "the product is: " << val1 * val2 << "\n";
		cout << "the ratio is: " << val1 << " to " << val2 << "\n";



	keep_window_open();
	}