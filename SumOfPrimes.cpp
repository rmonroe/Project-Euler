//Project Euler #10

//The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.

//Find the sum of all the primes below two million.

//ANS: 142913828922

#include <iostream>
using namespace std;

int main()
{
	//use long long due to the large numbers, just to be safe
	long long tempPrime = 3, sum = 2, j = 3;
	
	//run while the tempPrime we are checking is under 2 000 000
	while(tempPrime < 2000000)
	{
		//j is used to check if the number is a prime
		j = 3;
		while (true)
		{
			//if the number is divisible its not a prime so leave
			if ((tempPrime % j) == 0)
				break;
			//if that number didnt work increase the divisor
			j++;
			//if the divisor is now equal we found a prime
			if (j == tempPrime)
				break;	
		}
		//handle the prime
		if (j == tempPrime)
		{
			cout << tempPrime << endl;
			//add the prime to the total sum
			sum += tempPrime;
		}
		//check the next number for prime
		tempPrime+= 2;
	}
	//print the final sum
	cout << "\n\n\nSum: " << sum;
}
