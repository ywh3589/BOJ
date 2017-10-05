l, p = map(int, input().split())
l *= p
for i in map(int, input().split()): 
    print(i-l, end = ' ')