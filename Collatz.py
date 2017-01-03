# -*- coding: utf-8 -*-
"""
    Project Euler # 14
    The following iterative sequence is defined for the set of positive integers:

        n → n/2 (n is even)
        n → 3n + 1 (n is odd)

    Using the rule above and starting with 13, we generate the following sequence:

        13 → 40 → 20 → 10 → 5 → 16 → 8 → 4 → 2 → 1
    
    It can be seen that this sequence (starting at 13 and finishing at 1) contains 10 terms. Although it has not been proved yet (Collatz Problem), it is thought that all starting numbers finish at 1.

    Which starting number, under one million, produces the longest chain?

    NOTE: Once the chain starts the terms are allowed to go above one million.
    
    Ans: 837799 (525 terms)
"""
# create a function to determine collatz sequence
def collatz(num):
    # list to hold the chain
    chain = [num]
    # all should go to 1 so run till num is 1
    while (num != 1):
        # even number divide by 2
        if (num % 2) == 0:
            num /= 2 
        # odd number multiply by 3 + 1
        else:
            num = (3*num) + 1
        # add the number to the chain
        chain.append(num) 
    # get the size of the chain
    return(len(chain))

# list to hold all the chains
res = []
# nums 1 to 1000000
for i in range (1, 1000000):
    res.append(collatz(i))

# get the max chain from the list
myMax = max(res)
print (myMax)
# find the max term using the index, add 1 to account for 0 start
print (res.index(myMax) + 1)
        