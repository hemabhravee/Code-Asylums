def rev(a):
    rev_no = 0
    while(a>0):
        rev_no = rev_no*10 + a%10
        a //= 10 
        print(rev_no)
    return rev_no

iter = int(input())

for i in range(iter):
    x = int(input())
    y = int(input())
    print(rev(rev(x) + rev(y)))
