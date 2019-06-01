import sys
   
def main():
    N = int(input())
    for i in range(N):
        s = input()
        if("simon says" == s[:10]):
            print(s[11:])
        else:
            print("")

main()