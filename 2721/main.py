for i in range(int(input())):
    a = int(input())
    print(sum(i*(i+1)*(i+2)//2 for i in range(1, a+1)))
    