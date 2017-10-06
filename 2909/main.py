a, b = map(int, input().split())
s = a%pow(10, b)
f = a//pow(10, b)
if b == 0 :
     print(a)
elif s < pow(10, b)//2 :
     print(f*pow(10, b))
else :
    print((f+1)*pow(10, b))
