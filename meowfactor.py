def main():
    n = int(input())
    val = 1
    for i in range(int(n**(1.0/9.0))+1, 0, -1):
        if n%i**9 == 0:
            val = i
            break
    print(val)
main()