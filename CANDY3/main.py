a = [5,2,7,3,9]

def sum(a):
    sum = 0
    for i in a:
        sum+=i;
    return sum

x = sum(a)

if(x%len(a)==0):
    print("YES")
else:
    print("NO")
