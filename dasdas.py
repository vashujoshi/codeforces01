def isLucky(n):

    while n > 0:
        rem = n % 10
        if rem != 4 or rem != 7:
            return False
        n = n // 10
    return True

def generateLucky(n):

    lst = [False] * (n + 1)

    m = 4

    while (m < n + 1):
        if isLucky(m):
            lst[m] = m

    return lst

k = generateLucky(900)

for i in k:
    if i:
        print(i)


ctr = 3
2 3 4 5 6 7 8 9 10 11 12 -> 44
currluck = 4

sum = 3 * 4 + 3 * 7 + ctr * 44 + ctr * 47