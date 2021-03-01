import collections

my_str = list(input().strip())
mostCommon = collections.Counter(my_str)
k = 0
commonAlphabet = []

for i in mostCommon:
    if mostCommon[i] > k:
        k = mostCommon[i]
        commonAlphabet = list(i)
    elif mostCommon[i] == k:
        commonAlphabet.append(i)
        
commonAlphabet.sort()

print(''.join(commonAlphabet))
