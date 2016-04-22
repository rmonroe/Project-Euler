//Project Euler #5

//2520 is the smallest number that can be divided 
//by each of the numbers from 1 to 10 without any remainder.

//What is the smallest positive number that is evenly 
//divisible by all of the numbers from 1 to 20?
//Ans: 232792560

#include <iostream>
using namespace std;

int main()
{
   int i;
   int num = 0;
   
   while (true)
   {
        i = 1;
        num ++;
		//check that the number in divisible by 1-20
		//check nums until not divisible
       while (num % i == 0)
       {
           if (i == 20)
            break;
           i++;
       }
	   //was it divisible by 1-20
       if (i == 20)
        break;
   }
   //output
   cout << num;
   return 0;
}
