#https://www.geeksforgeeks.org/program-nth-catalan-number/

import math
def factorial(n):
    return math.factorial(n)
def catalan(nodeValues):
    n = len(nodeValues)
    ans = []
    for i in range(n):

        # (2n)! / (n+1)! * (n)!
        temp = (factorial(2 * nodeValues[i]) // (factorial(nodeValues[i] + 1) * factorial(nodeValues[i]))) % 100000007
        ans.append(temp)
    return ans

print(catalan([1,2,3,4,100]))