//Project Euler #6

//The sum of the squares of the first ten natural numbers is,
//12 + 22 + ... + 102 = 385
//The square of the sum of the first ten natural numbers is,
//(1 + 2 + ... + 10)2 = 552 = 3025
//Hence the difference between the sum of the squares of the
// first ten natural numbers and the square of the sum is 3025 − 385 = 2640.

//Find the difference between the sum of the squares of the first one hundred 
//natural numbers and the square of the sum.
//Ans: 25164150

#include <iostream>
using namespace std;

int main()
{
   long sumSquares = 0;
   long squareSum = 0;
   long result;
   
   //loop through natural number 1-100
   for(int i = 1; i <= 100; i++)
   {
	   //get the sum of squares
       sumSquares += (i * i);
	   //get the sum to square at the end
       squareSum += i;
   }
   //square the sum
   squareSum *= squareSum;
   //find the difference
   result = sumSquares - squareSum;
   cout << result << endl;
   return 0;
}
