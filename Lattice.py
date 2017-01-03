# -*- coding: utf-8 -*-
"""
Created on Tue Jan 03 10:50:20 2017

@author: Ryan
"""
import numpy as np

x = 3
Matrix = [['.' for i in range(x)] for j in range(x)]
print (np.matrix(Matrix))


def route(x, y):
    tempX = 0
    tempY = 0
    checkX = x
    checkY = y
              
     