In = lambda:map(int, input().split())
n, m = In()
res = 0
a = list(In())
for i in range(0, n) :
    if m >= a[i] :
        res += 1;
        m -= a[i]
    else : break
print(res)
