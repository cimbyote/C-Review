#include "DiceRollOddsCalc.h"
#include <iostream>
using std::cout;
using std::cin;

diceRollOddsCalc::diceRollOddsCalc()
{
}

void diceRollOddsCalc::runSimulation()
{
	double prob_total = 0.0;

	for (int i = 2; i <= 12; ++i)
	{
		prob_total += calc_roll(i);
	}

	cout << "Total probability of winning: ";
	cout << prob_total;
	cin.ignore();
}

double diceRollOddsCalc::calc_roll(int n)
{
	double d = dice_totals[n - 2];
	double prob_roll = d / 36.0;

	switch (n)
	{
	case 2:
	case 3:
	case 12:
		return 0;
		break;
	case 7:
	case 11:
		return prob_roll;
		break;
	default:
		return prob_roll * (d / (d + 6.0));
		break;
	}
}

