import math

def main():
    numInputs = int(input())
    for _ in range(numInputs):
        n = int(input())
        numerator = math.factorial(2*n)//((math.factorial(n))**2)
        denominator = n+1
        catalan = numerator//denominator
        print(catalan)
    
main()