import math

def main():
    testCases = int(input())
    for _ in range(testCases):
        n = int(input())
        fac = math.factorial(n)
        print(fac%10)

main()