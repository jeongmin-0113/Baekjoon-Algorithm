myList = []

for i in range(0,9):
    k = int(input())
    myList.append(k)
    
for m in range(0,9):
    if myList[m] == max(myList):
        print(myList[m])
        print(m+1)
