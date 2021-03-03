k = int(input())
mylist = list(str(k))

# k가 10보다 작으면 앞에 0 붙이기
if (k / 10) < 1:
    a = 0
    b = int(mylist[0])
else:
    a = int(mylist[0])
    b = int(mylist[1])

s = a+b
i = 1
new_k = b*10 + s%10
new_s = new_k

# 사이클
while True:

    if k == new_k :
        print(i)
        break

    if (new_k / 10) < 1:
        a = 0
        b = new_k
    else:
        a = int(new_k/10)
        b = new_k%10

    s = a+b
    i += 1
    new_k = (new_s%10)*10 + s%10
    new_s = new_k
    

