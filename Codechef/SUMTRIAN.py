# https://www.codechef.com/problems/SUMTRIAN
for i in range(int(input())):
    n = int(input())
    a = [0 for _ in range(n)]
    for j in range(n):
        a[j] = [int(val) for val in input().strip(' ').split()]
    for j in range(n-1, 0, -1):
        for x in range(j):
            a[j-1][x] += max(a[j][x], a[j][x+1])
    print(a[0][0])
