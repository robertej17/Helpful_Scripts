# -*- coding: utf-8 -*-
"""
Created on Fri Sep 29 10:45:19 2017

@author: bobby
"""

import csv
import numpy as np
import pandas

colnames = ['hits']

data = pandas.read_csv('test_1060V_8192h.csv', names = colnames)

print(len(data))