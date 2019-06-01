import sys
   
def main():
    highestScore = (0, 0)
    contestantNum = 1
    for line in sys.stdin.readlines():
        line = line.split(" ")
        score = 0
        for i in line:
            i = int(i)
            score += i
        if score > highestScore[1]:
            highestScore = (contestantNum, score)
        contestantNum += 1
    print("{0} {1}".format(highestScore[0], highestScore[1]))

main()