k = int(input())
myString = list(input())
len_myString = len(myString)

for i in range(k-1):
    m = list(input())
    for n in range(len_myString):
        if myString[n] != m[n]:
            myString[n] = '?'
            
print(''.join(myString))
    