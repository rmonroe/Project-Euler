//Project Euler #7

//By listing the first six prime numbers: 
//2, 3, 5, 7, 11, and 13, we can see that
//the 6th prime is 13.

//What is the 10 001st prime number?

//ANS: 104743

#include <iostream>
using namespace std;
//create an array large enough to hold each prime number up to 10001
int primes[10001];

int main()
{
	//temp prime is the number we keep increasing to check primes
	// start at three because from 3 we can check only the odd numbers
	//evens are not primes due to being divisible by 2
	int tempPrime = 3;
	//j will be the number we keep dividing by start at 3 because we we are using odds skip 2
	int j = 3;
	//i tracks the index of primes we are in
	int i =0;
	//this while runs for each index and only increases if we find a prime to fill that index
	//the 10 001st is the last because the 0 index
	while(i<10000)
	{
		//reset j with each iteration fro division
		j = 3;
		//this loops check that that tempPrime is a prime
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
			//add the prime to the index of i
			primes[i] = tempPrime;
			//print that prime
			cout << primes[i] << endl;
			//move to the next index
			i++;
		}
		//check the next number for prime
		tempPrime+= 2;
	}
	
}
