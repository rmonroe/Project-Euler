//Project Euler #9

//A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,

//a^2 + b^2 = c^2
//For example, 3^2 + 4^2 = 9 + 16 = 25 = 5^2.

//There exists exactly one Pythagorean triplet for which a + b + c = 1000.
//Find the product abc.

//a = 200, b = 375, c = 425
//ANS: 31875000

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	//create variable for the sides and temps to manipulate
	int a, b, c, j, ans, i = 1;
	//this temp is a float because it will hold the square root
	float temp;
	
	
	
	while (true)
	{
		//compare each possibility so each iteration is compared with b(j) starting at 1
		j=1;
		while(true)
		{
			//get value of a^2 + b^2
			temp = pow(i, 2) + pow(j,2);
			//square root that value
			temp = sqrt(temp);
			//check if that value is a whole number, so the floor should match the ceiling
			if (floor(temp) == ceil(temp))
			{
				//if it is a whole then it is a triple 
				a = i;
				b = j;
				c = (int)temp;
				cout << a << " " << b << " " << c << " \n";
				break;
			}
			//if its not a whole find one that is
			else
			{
				j++;
			}
		}
		//checkt the case we are looking for with that triple
		if ((a+b+c) == 1000)
		{
			//switch to the correct order
			if (a > b)
			{
				temp = a;
				a = b;
				b = temp;
			}	
			break;
		}
		//if its not the one were looking for increse a(i)
		else
			i++;
	}
	//print the final triple and ans
	cout << "\n\n\n" << a << " " << b << " " << c << " \n";
	ans = a * b * c;
	cout << ans;
}
