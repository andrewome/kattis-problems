import sys

def main():
    _input = sys.stdin.readlines()
    dictionary = {}
    isQuery = False
    for i in _input:
        if i == "\n":
            isQuery = True
            continue

        if i[len(i)-1] == "\n":
            i = i[:len(i)-1]

        if isQuery == False:
            i = i.split(" ")
            key = i[1]
            val = i[0]
            dictionary[key] = val
        
        if isQuery == True:
            if i in dictionary.keys():
                print(dictionary[i])
            else:
                print("eh")
main()