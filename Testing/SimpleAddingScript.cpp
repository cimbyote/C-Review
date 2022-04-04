#include <iostream>
#include "SimpleAddingScript.h"

using std::cout;
using std::cin;
using std::endl;


	void SimpleAddingScript::SimpleAdding()
	{
		double sum = 0;
		double inNum = 1;
		cout << "Enter a list of numbers, termindated with a 0 ";
		//cout << "or non-digit." << endl << "Enter: ";
		//endl is a new line terminator. not a fan...
		cout << "or non-digit.";
		cout << " Enter: ";

		while (inNum != 0)
		{
			cin >> inNum;
			if (!cin)
			{
				inNum = 0;
			}
			sum = sum + inNum;
		}
		cout << "You added up " << inNum << " numbers." << endl;
		cout << "Total is: " << sum << endl;
		//cout << "Press enter to exit";

		//cin.ignore();
		//cin.ignore();
		system("Pause"); //can use this instead of teh extra cout and the cin.ignore() cin.ignore()
	}
