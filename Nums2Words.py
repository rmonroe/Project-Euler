# -*- coding: utf-8 -*-
"""
    Project Euler # 17
    
    If the numbers 1 to 5 are written out in words: one, two, three, four,
    five, then there are 3 + 3 + 5 + 4 + 4 = 19 letters used in total.

    If all the numbers from 1 to 1000 (one thousand) inclusive were written out
    in words, how many letters would be used?
    
    ANS:  21124


NOTE: Do not count spaces or hyphens. For example, 342 (three hundred and
 forty-two) contains 23 letters and 115 (one hundred and fifteen) contains 20 
 letters. The use of "and" when writing out numbers is in compliance with 
 British usage.
"""

# arrays of all the word form of each number
digits = ['one', 'two', 'three', 'four', 'five', 'six', 'seven', 'eight', 'nine']
teens = ['eleven', 'twelve', 'thirteen', 'fourteen', 'fifteen', 'sixteen', 'seventeen', 'eighteen', 'nineteen']
tens = ['ten', 'twenty', 'thirty', 'forty', 'fifty', 'sixty', 'seventy', 'eighty', 'ninety']
hundreds = ['onehundred', 'twohundred', 'threehundred', 'fourhundred', 'fivehundred', 'sixhundred', 'sevenhundred', 'eighthundred', 'ninehundred']
thousands = ['onethousand']

ans = 0
word = ""

for i in range (0, 1000):
    # for my own tracking
    num = i + 1
    print num
     # thousands place
    if (num / 1000 >= 1):
        # find the number in the thousands place
        temp = num / 1000
        # match with word equal to that place
        word += thousands[temp - 1]
        # remove the thousands place to calc the other nums
        num -= (temp * 1000)
    
    #hundreds place
    if (num / 100 >= 1):
        # find the number of the hundreds place
        temp = num / 100
        # only put an if not a hundred
        if (num % 100 == 0):
            word = word + hundreds[temp - 1]
        else:
            word = word + hundreds[temp - 1] + 'and'
        # remove the hundreds place
        num -= (temp * 100)
    
    # tens place
    if (num / 10 >= 1):
        # get the tens place
        temp = num / 10
        # special case for teens
        if (10 < num < 20):
            word += teens[(num % 10) - 1]
        else:
            word += tens[temp - 1]
            num -= (temp * 10)
    # ones place
    # just use the num because all other positions are subtracted out
    if (0 < num < 10):
        word += digits[num - 1]

# print the word because
print word
# get the len of the total letters
ans = len(word)
print ans
    