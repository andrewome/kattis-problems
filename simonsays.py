import sys
   
def main():
    N = int(input())
    for i in range(N):
        s = input()
        if("Simon says" == s[:10]):
            print(s[10:])

main()