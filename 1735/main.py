def gcd (a, b) :
    if b > 0 : return gcd(b, a%b)
    return a

In = lambda:map(int, input().split())
a, b = In()
c, d = In()
g = gcd(b, d)
e = b//g
f = d//g
nm = e*f*g
ns = a*f + c*e
ng = gcd(nm, ns)
print(g)
print("%d %d" %(ns//ng, nm//ng))
