def fact(n):
    if(n==1):
        return 1
    else:
        return n*fact(n-1)

def funcZ(n):
    f = fact(n)
    print(f)
    c = 0
    while(f%10==0):
        c += 1
        f //= 10
        print(f)
    print(c)

funcZ(60)
    
