t = int(input())

while (t != 0):

    n, k = list(map(int, input().split(" ")))
    lst = list(map(int, input().split()))

    if (k != 4):
        min1 = k - (lst[0] % k)
        flag = True
        for i in range(len(lst)):
            if (lst[i] % k == 0):
                print(0)
                flag = False
                break
            if (min1 > (k - lst[i] % k)):
                min1 = k - lst[i] % k
        if (flag) : print(min1)

    else:
        min1 = k - (lst[0] % k)
        ctr = 0
        flag = True
        for i in range(len(lst)):
            if (lst[i] % k == 0):
                print(0)
                flag = False
                break
            if (lst[i] % 2 == 0):
                ctr += 1
                if(ctr >= 2):
                    flag = False
                    print(0)
                    break
            if (min1 > (k - lst[i] % k)):
                min1 = k - lst[i] % k

        if(flag):
            if(ctr == 0):
                print(min(min1, 2))    
            elif(ctr == 1):
                print(min(min1, 1))    

    t = t - 1
