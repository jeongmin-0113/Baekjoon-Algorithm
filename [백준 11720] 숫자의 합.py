N = int(input())
numLine = list(input())
answer = 0

if len(numLine) == N:
    for k in numLine:
        answer += int(k)
        
print(answer)