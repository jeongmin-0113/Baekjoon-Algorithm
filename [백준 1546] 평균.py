N = int(input())
scores = list(map(int, input().split(' ')))
score = 0

M = max(scores)
for i in scores:
    score += i/M*100
    
print(score/N)