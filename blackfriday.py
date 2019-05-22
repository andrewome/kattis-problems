def main():
    numPeople = int(input())
    queue = []
    count = [-99, 0, 0, 0, 0, 0, 0]

    _input = input()
    _input = _input.split(" ")

    for i in _input:
        val = int(i)
        queue.append(val)
        count[val] += 1
    
    for i in range(6, 0, -1):
        if count[i] == 1:
            for j in range(numPeople):
                if queue[j] == i:
                    print(j+1)
                    return
    print("none")

main()