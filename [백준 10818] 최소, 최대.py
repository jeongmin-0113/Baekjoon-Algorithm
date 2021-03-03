N = int(input())
num_list = list(map(int, input().split( )))

if len(num_list) ==  N:
    print(min(num_list), max(num_list))
