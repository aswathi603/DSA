#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'minimumNumber' function below.
#
# The function is expected to return an INTEGER.
# The function accepts following parameters:
#  1. INTEGER n
#  2. STRING password
#

def minimumNumber(n, password):
    # Return the minimum number of characters to make the password strong
    numbers = "0123456789"
    lower_case = "abcdefghijklmnopqrstuvwxyz"
    upper_case = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
    special_characters = "!@#$%^&*()-+"
    
    has_digit = any(c in numbers for c in password)
    has_lower = any(c in lower_case for c in password)
    has_upper = any(c in upper_case for c in password)
    has_special = any(c in special_characters for c in password)
    
    
    missing_count = 0
    if not has_digit:
        missing_count += 1
    if not has_lower:
        missing_count += 1
    if not has_upper:
        missing_count += 1
    if not has_special:
        missing_count += 1
    
    additional_length = max(0, 6 - n)
    return max(missing_count, additional_length)

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input().strip())

    password = input()

    answer = minimumNumber(n, password)

    fptr.write(str(answer) + '\n')

    fptr.close()