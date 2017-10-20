a, b, c, d, e = map(lambda x:int(input()), ['']*5)
print(min(a*e, b+d*max(e-c, 0)))
