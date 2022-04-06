#include "NumberGuesser.h"
#include <cstdlib>
#include <ctime>
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

void NumberGuesser::play()
{
	srand(time(NULL));
	bool play_more = true;
	secretNumber = 0;
	numOfGuesses = 0;

	while (play_more)
	{
		cout << "Pick a range from 1 to your guess: ";
		cin >> range;

		if (range == 0)
		{
			play_more = false;
			break;
		}

		int secretNumber = 1 + rand() % range;


		while (true) {
			cout << "Guess the number, or 0 to quit: ";

			if (cin >> guess)
			{
				if (guess == 0)
				{
					play_more = false;
					break;
				}
				else if (guess == secretNumber)
				{
					cout << "Correct!";
					numOfGuesses++;
					cout << "It took you " << numOfGuesses << " guesses!";
					break;
				}
				else if (guess < secretNumber)
				{
					cout << "Too low, try again";
					numOfGuesses++;
				}
				else
				{
					cout << "Too high, try again";
					numOfGuesses++;
				}
			}
			else
			{
				cin.clear();
				cout << "Numbers only";
				play_more = false;
				break;
			}
			
		}
		
	}
	cout << "Thanks for playing!!!!!!!!!!!!!\n\n";

}
