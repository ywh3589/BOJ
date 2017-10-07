l = sorted(map(int, input().split()))
a = l[2] - l[1]
b = l[1] - l[0]
if a == b : print(l[2]+a)
elif a > b : print(l[1]+b)
else : print(l[0]+a)