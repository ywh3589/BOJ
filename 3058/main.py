t = int(input())
while t > 0 :
    t -= 1
    a = map(int, input().split())
    s = 0
    m = 12345
    for i in a :
        if i % 2 : continue
        s += i
        if m > i : m = i
    print("%d %d" %(s, m))

