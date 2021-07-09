n = int(input())
planelist = []

for i in range(n):
    x, y = map(int, input().split(' '))
    planelist.append((x,y))
    
planelist.sort()
for j in planelist:
    print(j[0], j[1])