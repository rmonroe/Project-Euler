//Project Euler #2

//Each new term in the Fibonacci sequence is generated 
//by adding the previous two terms. By starting with 1 
//and 2, the first 10 terms will be:
//1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...

//By considering the terms in the Fibonacci sequence 
//whose values do not exceed four million, find the sum
// of the even-valued terms.
//Ans: 4613732

#include <iostream>
#include<vector>
using namespace std;

int main()
{
	//vectors do not require knowing the MAX size
	vector <int> myVector;
	//highest number that can be achieved
	int MAX = 4000000;
	//Start with 1 and 2
	int i = 1;
	int j = 2;
	//k used for swap
	int k;
	int mySum;
	
	//start the stack with 1 and 2
	myVector.push_back(i);
	myVector.push_back(j);
	
	//run as long as the number is smaller that the max
	while(j < SIZE)
	{
		//add the two numbers
		k = i + j;
		//push it on to the stack
		myVector.push_back(k);
		//move j to i
		i = j;
		//move j to k
		j = k;
	}
	//run as long as q is smaller than the whole stack
	for (int q = 0; q < myVector.size(); q++)
	{
		//check the vector for even
		//evens mods = 0 or false
		if (!(myVector[q] % 2))
			//even add to the sum
			mySum += myVector[q];
	}
	//print the answer
	cout << mySum << endl;
	return 0;
}
