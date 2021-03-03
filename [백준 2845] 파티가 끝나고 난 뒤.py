L, P = map(int, input().split( ))
newsList = list(map(int, input().split( )))

SG = L * P

for i in newsList:
    if len(newsList) == 5:
        print(i-SG, end=' ')
        