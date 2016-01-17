# http://www.spoj.com/problems/ADDREV/
for _ in range(int(input())):
    a = list(input().split(' '))
    n = int(str(int(str(a[0])[::-1].strip('0')) + int(str(a[1])[::-1].strip('0'))).strip('0')[::-1])
    print(n)
