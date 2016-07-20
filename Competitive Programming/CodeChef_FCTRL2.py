T = int(input())
for _ in range(T):
    fact = 1
    n = int(input())
    for i in range(n, 1, -1):
        if n == 0:
            fact = 1
        else:
            fact *= i
    print(fact)
