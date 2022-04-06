#include <iostream>
#include "SimpleAddingScript.h"
#include "FibonacchiAndPhi.h"
#include "NumberGuesser.h"
#include "NumberGuesserComputerPlayer.h"

int main()
{
	//SimpleAddingScript addingScript;
	//addingScript.SimpleAdding();

	//FibonacchiAndPhi phi;
	//phi.CalculatePhiv2();

	NumberGuesserComputerPlayer game;
	game.play();

	return 0;
}
