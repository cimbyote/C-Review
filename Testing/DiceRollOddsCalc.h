class diceRollOddsCalc
{
public:
	//not bothering with other big 4
	diceRollOddsCalc(); //default constructor


	void runSimulation();

private:

	double calc_roll(int n);

	int dice_totals[11] = {1,2,3,4,5,6,5,4,3,2,1};



};
