import collections

A = int(input())
B = int(input())
C = int(input())

multi = list(str(A*B*C))
myCount = collections.Counter(multi)



for i in range(0,10):
    if str(i) not in myCount:
        k = str(i)
        myCount[k] = 0


newList = dict(myCount)
newList = sorted(newList.items(), key=lambda x:x[0])
newList = dict(newList)

for m in newList:
    strM = str(m)
    print(newList[strM])

