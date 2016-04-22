//Project Euler #1

//If we list all the natural numbers below 10 that
//are multiples of 3 or 5, we get 3, 5, 6 and 9. 
//The sum of these multiples is 23.

//Find the sum of all the multiples of 3 or 5 below 1000.
//ANS: 233168

#include <iostream>
using namespace std;

int main()
{
	int MAX = 1000;
	//start at 3, the first mutliple
	int myNum = 3;
	int mySum;
	
	//check all numbers until at the MAX, but not equal to
	for (int i = 0; i < MAX; i++)
	{
		//Mod 3 means i is multiple add to sum
		if ((i % 3) == 0)
			mySum += i;
		//Same as 3
		else if ((i % 5) == 0)
			mySum += i;
	}
	cout << " TOTAL = " << mySum << endl;
	return 0;
}
