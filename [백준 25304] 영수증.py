x = int(input());
lst = [];
ans = 0;

n = int(input());
for i in range(n) :
  a, b = map(int, input().split())
  ans += a * b

if ans == x :
  print("Yes")
else:
  print("No")
