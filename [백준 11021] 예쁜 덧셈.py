T = int(input())

for i in range(1, T+1) :
    a, b = map(int, input().split( ))
    k = a+b
    print("Case #"+ str(i) + ":", k)