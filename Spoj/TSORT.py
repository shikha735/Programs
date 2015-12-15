T = int(input())
num = []
for _ in range(T):
    num.append(int(input()))
num.sort()
num = list(map(int, num))
for i in num:
    print(i)
 