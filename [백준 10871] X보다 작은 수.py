N, X = map(int, input().split( ))
mylist = list(map(int, input().split( )))
k = len(mylist)
answer = []

if N == k :
    for i in mylist :
        if i < X :
            answer.append(str(i))

    print(" ".join(answer))