n = int(input())
res = 0
a = [int(input()) for _ in range(n)]
In = lambda:map(int, input().split())
for i in range(0, n) :
    res += pow(a[i]//10, a[i]%10)
print(res)
