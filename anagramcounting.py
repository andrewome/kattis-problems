import math
import sys

def main():
    while True:
        try:
            alphabetFrequencies = {}
            _input = input()
            
            if '\r' in _input:
                _input = _input[:len(_input)-1]
                
            for alphabet in _input:
                if alphabet in alphabetFrequencies.keys():
                    alphabetFrequencies[alphabet] += 1
                else:
                    alphabetFrequencies[alphabet] = 1
            numerator = math.factorial(len(_input))
            denominator = 1

            for alphabet, frequency in alphabetFrequencies.items():
                if frequency > 1:
                    denominator *= math.factorial(frequency)

            print(numerator//denominator)
        except EOFError:
            break
    
main()