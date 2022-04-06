#include "NumberGuesserComputerPlayer.h"
#include <cstdlib>
#include <ctime>
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

void NumberGuesserComputerPlayer::play()
{
	srand(time(NULL));
	bool play_more = true;
	secretNumber = 0;
	numOfGuesses = 0;
	upperBound = 50;
	lowerBound = 1;
	
	secretNumber = lowerBound + rand() % upperBound;

	int playerInput = 0;

	while (play_more)
	{

		cout << "You pick a number between 1 and " << upperBound << endl;

		while (true) {
			guess = (upperBound + lowerBound) / 2;

			cout << "I guess " << guess << endl;
			cout << "Is this right? \n";
			cout << "Yes == 1, Too High == 2, Too Low == 3\n";

			cin >> playerInput;

			if (playerInput == 1)
			{
				cout << "Correct! Yay";
				play_more = false;
				break;
			}
			else if (playerInput == 2)
			{
				cout << "Too High. Try again\n";
				upperBound = guess - 1;
			}
			else if (playerInput == 3)
			{
				cout << "Too low. Try again\n";
				lowerBound = guess + 1;
			}
			else
			{
				cout << "Error";
				play_more = false;
				break;
			}
		}
	}

}
