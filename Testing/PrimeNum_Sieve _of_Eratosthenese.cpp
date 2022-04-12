#include "PrimeNum_Sieve _of_Eratosthenese.h"
#include "DiceRollOddsCalc.h"
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

GivePrimeNumbers::GivePrimeNumbers()
{
	primesFound = 0;

}

void GivePrimeNumbers::runSim()
{
	int max_n = 0;
	cout << "Calculate primes up to what number? ";
	cin >> max_n;

	int* pPrimesFound = &primesFound; //unnecessary, just playing around with pointers.

	bool* primeArray = new bool[max_n + 1]; //allocate array

	for (int i = 2; i <= max_n; ++i) //set all value sin array to true
	{
		primeArray[i] = true;
	}

	for (int i = 2; i <= max_n; ++i)
	{
		if (primeArray[i])
		{
			process_prime(primeArray, max_n, i);
			*pPrimesFound += 1; //get what is referenced at pointer, and increment it. 
		}
	}

	cout << endl;
	cout << "Prime Numbers found in range: " << primesFound << endl;
	delete[] primeArray;
	
	cin.ignore();
	cin.ignore();

}

void GivePrimeNumbers::process_prime(bool* p, int max_n, int n)
{
	//

	cout << n << "\t";
	for (int i = n + n; i <= max_n; i += n)
	{
		
		p[i] = false;
	}
}

