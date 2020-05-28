#!/bin/python3

import math
import os
import random
import re
import sys




first_multiple_input = input().rstrip().split()

n = int(first_multiple_input[0])

m = int(first_multiple_input[1])

matrix = []

for _ in range(n):
    matrix_item = input()
    matrix.append(matrix_item)

#x=[]
y=""
#for i in matrix:
 #   new=i
  #  a=list(new)
   # for i in range(m):
    #    x.append(new[i])
for i in range(0,m):
    for j in range(0,n):
        y+=matrix[j][i]
a= re.compile(r'(\w)(\W+)(\w)')
st = a.sub(r"\1 \3",y)

print(st)
