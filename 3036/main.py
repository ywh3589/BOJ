import math as M
n = int(input())
a = list(map(int, input().split()))
for i in range(1, n) :
    g = M.gcd(a[0], a[i])
    print("%d/%d" %(a[0]//g, a[i]//g))
    