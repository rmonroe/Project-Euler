# -*- coding: utf-8 -*-
"""
    Project Euler #16
    
    2^15 = 32768 and the sum of its digits is 3 + 2 + 7 + 6 + 8 = 26.

    What is the sum of the digits of the number 2^1000?
    
    Ans: 1366
"""
# get 2^1000
num = pow(2, 1000)

# create a string to iterate through the digit
numStr = str(num)

# mySum for the ans
mySum = 0

#iterate through the num
for i in numStr:
    print (i)
    # add all the digits together
    mySum += int(i)

#print the sum 
print mySum