N = int(input())
numLine = input()
numLine = list(map(int, numLine))

if len(numLine) == N:
    print(sum(numLine))