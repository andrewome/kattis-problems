def main():
    _input = input()
    _input = _input.split(" ")
    N = int(_input[0])
    M = int(_input[1])
    arr = []

    for i in range(N + M + 1):
        arr.append(0)

    probability = (1 / N) * (1 / M)
    for i in range(1, N+1):
        for j in range(1, M+1):
            arr[i+j] += probability

    maxProbability = 0
    for i in arr:
        maxProbability = max(maxProbability, i)
    
    for i in range(len(arr)):
        if arr[i] == maxProbability:
            print(i)

main()