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
       while (num % i == 0)
       {
           if (i == 20)
            break;
           i++;
       }
       if (i == 20)
        break;
   }
   cout << num;
   return 0;
}
