import math

def main():
    n = int(input())
    n += 1
    numerator = math.factorial(2*n)//((math.factorial(n))**2)
    denominator = n+1
    catalan = numerator//denominator
    print(catalan)
    
main()