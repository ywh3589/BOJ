a = int(input())
b = a//2 +1
print([b*b, b*(b+1)][a%2 != 0])