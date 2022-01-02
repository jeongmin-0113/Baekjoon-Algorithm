import sys

n = int(sys.stdin.readline().strip())
que = []

for i in range(n):
    tmp = sys.stdin.readline().strip()
    if 'push' in tmp:
        k = int(tmp[5:])
        que.append(k)
    elif tmp == 'pop':
        if que == []:
            print(-1)
        else:
            print(que.pop(0))
    elif tmp == 'size':
        print(len(que))
    elif tmp == 'empty':
        if que == []:
            print(1)
        else:
            print(0)
    elif tmp == 'front':
        if que == []:
            print(-1)
        else:
            print(que[0])
    elif tmp == 'back':
        if que == []:
            print(-1)
        else:
            print(que[-1])