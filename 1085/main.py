a, b, c, d = map(int, input().split())
print(min(min(a, b), min(c-a, d-b)))

