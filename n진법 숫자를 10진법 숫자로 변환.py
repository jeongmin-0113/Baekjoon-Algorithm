#num, base 입력 받음
num, base = map(int, input().strip().split(' '))

n = list(str(num))
num = list(map(int, n))
num.reverse()
k = 0
a = 0

for i in num:
    if k >= 0:
        a += i * base ** k
        k += 1
        
print(a)
