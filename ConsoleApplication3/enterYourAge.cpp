// ConsoleApplication3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "../../../std_lib_facilities.h"





int main()
{
	cout << "Please enter your age:\n";
	int age;
	cin >> age;
	if (age <= 0)
	{
		simple_error("You're Kidding!");
	}
	if (age >= 110)

		simple_error("Your'e Kidding!");
	
	else {
		cout << "I hear you just had birthday and you are " << age << " years old.\n";
	}

	if (age < 12)
		cout << "Next year you will be " << age + 1;
	if (age == 17)
		cout << "Next year you will be able to vote";
	if (age > 70)
		cout << "I hope you are enjoying retirement";
	cout << "Yours sincerely  \n" << "Oguzhan Güllü";

	keep_window_open();
	}