import math

e = 2.7182818284590452353602874713527
pi = 3.141592653589793238462643383279

def main():
    number = input()
    lengthOfDigit = len(number)
    
    if number == '1': 
        print(1)
    elif number == '2':
        print(2)
    elif number == '6':
        print(3)
    elif number == '24':
        print(4)
    elif number == '120':
        print(5)
    elif number == '720':
        print(6)
    else:
        for n in range(7, 999999):
            numberOfDigits = math.floor(0.5 * math.log((2*pi*n), 10) + n * math.log(n, 10) - n * math.log(e, 10) + 1)
            if lengthOfDigit == numberOfDigits:
                print(n)
                return

main()