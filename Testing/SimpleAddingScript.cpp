#include <iostream>
#include "SimpleAddingScript.h"

using std::cout;
using std::cin;
using std::endl;


	void SimpleAddingScript::SimpleAdding()
	{
		int sum = 0;
		int n = 1;
		cout << "Enter a list of numbers, termindated with a 0 ";
		//cout << "or non-digit." << endl << "Enter: ";
		//endl is a new line terminator. not a fan...
		cout << "or non-digit.";
		cout << " Enter: ";
		while (n != 0)
		{
			cin >> n;
			if (!cin)
			{
				n = 0;
			}
			sum = sum + n;
		}

		cout << "Total is: " << sum << endl;
		//cout << "Press enter to exit";

		//cin.ignore();
		//cin.ignore();
		system("Pause"); //can use this instead of teh extra cout and the cin.ignore() cin.ignore()
	}
