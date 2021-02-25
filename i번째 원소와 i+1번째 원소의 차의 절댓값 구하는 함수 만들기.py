def solution(mylist):
    k = len(mylist)
    answer = []
    for i in range(1, k) :
        r = abs(mylist[i-1] - mylist[i])
        answer.append(r)
    return answer