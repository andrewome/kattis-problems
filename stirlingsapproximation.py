import sys
import math

pi = math.pi
e = math.e

def main():
    _input = sys.stdin.readlines()
    for line in _input:
        n = int(line)
        if n is 0:
            return
        logFactorial = math.lgamma(n+1)
        logStirling = 0.5 * math.log((2*pi*n)) + n * math.log(n) - n * math.log(e)
        fraction = logFactorial - logStirling
        print(e**fraction)

main()