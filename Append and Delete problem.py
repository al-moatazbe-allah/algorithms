#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'appendAndDelete' function below.
#
# The function is expected to return a STRING.
# The function accepts following parameters:
#  1. STRING s
#  2. STRING t
#  3. INTEGER k
#

def appendAndDelete(s, t, k):
    Answer= "No"
    A=len(s)   
    B=len(t)
    C=min(A,B)
    D=0
    for i in range(C):
        if s[i] !=t[i]:
            break
    if (A+B-2*i == k) or ((s == t) and (k %2 ==0  )) or (k > A+B):
        Answer="Yes"
    
    return Answer 

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    s = input()

    t = input()

    k = int(input().strip())

    result = appendAndDelete(s, t, k)

    fptr.write(result + '\n')

    fptr.close()
