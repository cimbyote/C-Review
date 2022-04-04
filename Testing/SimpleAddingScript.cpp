#include <iostream>
#include "SimpleAddingScript.h"

using std::cout;
using std::cin;
using std::endl;

//I don't like cout... I prefer printf, but input is a lot nicer...
//Just hate the double cin.ignore() thing


	void SimpleAddingScript::SimpleAdding()
	{
		double sum = 0;
		double inNum = 1;
		int count = 0;
		cout << "Enter a list of numbers, termindated any letter, then hit enter ";
		//cout << "or non-digit." << endl << "Enter: ";
		//endl is a new line terminator. not a fan...
		cout << " Enter your numbers: ";

		while (cin)
		{
			cin >> inNum;
			sum = sum + inNum;
			count++;
		}

		cout << "You added up " << count - 1 << " numbers." << endl;
		cout << "Total is: " << sum << endl;


		cout << "Press enter to exit";

		cin.ignore();
		cin.ignore();
		//system("Pause"); //can use this instead of teh extra cout and the cin.ignore() cin.ignore()
	}
