#include <iostream>
#include "SimpleAddingScript.h"
#include "FibonacchiAndPhi.h"
#include "NumberGuesser.h"
#include "NumberGuesserComputerPlayer.h"
#include "DiceRollOddsCalc.h"

using std::cin;
using std::cout;
using std::endl;

int main()
{
	//SimpleAddingScript addingScript;
	//addingScript.SimpleAdding();

	//FibonacchiAndPhi phi;
	//phi.CalculatePhiv2();

	//NumberGuesser game;
	//game.play();

	//NumberGuesserComputerPlayer game;
	//game.play();

	//testing out lamda's... seems like it'd just be easier to create an function, but this is nice to not have to declare a whole class and create an object...
	//int my_id = 5000;
	//auto testingLambda = [my_id](int n) {return my_id + n; };
	//cout << testingLambda(5) << endl;
	//cout << testingLambda(10) << endl;

	//int my_id2 = 5000;
	//auto testingLambdaWithRef = [&my_id2](int n) { my_id2 += n; return my_id2; };
	//cout << testingLambdaWithRef(5) << endl;
	//cout << testingLambdaWithRef(10) << endl;

	diceRollOddsCalc dice;
	dice.runSimulation();

	return 0;
}
