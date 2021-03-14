N = int(input())
B = 0

while True:
    if N % 5 == 0 or N == 0:
        A = N // 5
        print(A+B)
        break
    N -= 3
    B += 1
    if N < 0:
        print(-1)
        break