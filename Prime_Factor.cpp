//Project Euler #3

//The prime factors of 13195 are 5, 7, 13 and 29.

//What is the largest prime factor of the number 600851475143 ?
//Ans: 6857

#include <iostream>
#include <vector>
using namespace std;

	
int main()
{
	//Set the number
	long long int temp = 600851475143;
	
	//check only the odds, even will awlays be divisible by 2 not PRIME
	for(long long i = 3; i != temp; i += 2)
	{
		//while temp is divisible by i
		while (temp % i == 0)
			//divide temp by that number
			temp /= i;
			
		//after running through process temp will equal largest prime
	}
	//output final
	cout << temp << endl;

	return 0;
}

