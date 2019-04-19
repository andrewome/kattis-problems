import sys
import math
def main():
    for line in sys.stdin:
        val = int(line)
        if val == 0 or val == 1 or val == 2:
            print(1)
        else:
            print(math.ceil(math.lgamma(val+1) * math.log10(math.e)))

main()