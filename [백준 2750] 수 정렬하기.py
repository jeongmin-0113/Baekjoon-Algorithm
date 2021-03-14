N = int(input())
num = []

for i in range(N):
    k = int(input())
    num.append(k)
    
num.sort()

for i in num:
    print(i)