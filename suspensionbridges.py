import sys
import math

def binarySearch(l, r, dist, sag):
    a = (l + r)/2
    lhs = a + sag
    rhs = a * math.cosh(dist/(2 * a))
    #print("a + s = {0}\na x cosh(d/2a) = {1}".format(lhs, rhs))
    if abs(lhs - rhs) < 0.000001:
        return (2 * a * math.sinh(dist/(2 * a)))
    
    if lhs > rhs:
        return binarySearch(l, a, dist, sag)
    elif lhs < rhs:
        return binarySearch(a, r, dist, sag)
    else:
        return (2 * a * math.sinh(dist/(2 * a)))
    
def main():
    _input = input()
    _input = _input.split(" ")
    dist = float(_input[0])
    sag = float(_input[1])
    print("{:.09f}".format(binarySearch(0, 1000000, dist, sag)))

main()