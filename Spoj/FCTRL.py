T = int(input())
while T > 0:
    x = int(input())
    fsum = 0
    for y in range(1, 15):
        z = x // (5 ** y)
        if z != 0:
            fsum += z
        else:
            break
    print(fsum)
    T -= 1
