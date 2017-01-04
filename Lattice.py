# -*- coding: utf-8 -*-
"""
Created on Tue Jan 03 10:50:20 2017

@author: Ryan
"""
import numpy as np

x = 3

def route(x, y):
    checkX = x
    checkY = y
    routes = 0
    for i in range (0, checkX):
        tempY = 0
        if (tempY == checkY):
            checkY -= 1
            routes += 1
        else:
            tempY += 1
    print (routes)
    
route(x, x)
     