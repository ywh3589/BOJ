a = int(input())
n = 0
while a%5 != 0 :
    a -= 3
    n += 1
if a < 0 : print(-1)
else : print(n + a//5)