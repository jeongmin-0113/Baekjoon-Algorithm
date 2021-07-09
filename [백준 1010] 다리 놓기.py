testcase = int(input())
upper = 1
num1 = 1
num2 = 1

def facto(n):
    answer = 1
    for i in range(1, n+1):
        answer = answer * i
    return answer

for n in range(testcase):
    n, m = map(int, input().split(' '))
    
    answer = facto(m) // (facto(m-n) * facto(n))
    print(answer)