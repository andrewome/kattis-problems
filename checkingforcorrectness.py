import sys
import math

pi = math.pi
e = math.e

def main():
    _input = sys.stdin.readlines()
    for line in _input:
        arr = line.split(' ')
        a = int(arr[0])
        op = arr[1]
        b = int(arr[2])

        if op == '+':
            ans = (a+b)%10000
        if op == '*':
            ans = (a%10000*b%10000)%10000
        if op == '^':
            ans = pow(a, b, 10000)
        print(ans)

main()