myNum = list(map(int, input().split( )))
myAdd = 0

for i in myNum:
    myAdd += i ** 2
    
verification = myAdd % 10
print(verification)